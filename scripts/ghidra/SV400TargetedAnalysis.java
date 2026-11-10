// Targeted inspection of the already-analyzed SV 4.0.0 Ghidra project.
// Exports function bytes, disassembly, CFG edges, xrefs, callers/callees and
// bounded decompiler retries. It does not run auto-analysis or modify functions.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.RefType;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class SV400TargetedAnalysis extends GhidraScript {
    private static String q(String value) {
        if (value == null) return "null";
        StringBuilder out = new StringBuilder(value.length() + 8);
        out.append('"');
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            switch (c) {
                case '"': out.append("\\\""); break;
                case '\\': out.append("\\\\"); break;
                case '\n': out.append("\\n"); break;
                case '\r': out.append("\\r"); break;
                case '\t': out.append("\\t"); break;
                default:
                    if (c < 0x20) out.append(String.format("\\u%04x", (int)c));
                    else out.append(c);
            }
        }
        return out.append('"').toString();
    }

    private static String addr(Address a) {
        return a == null ? null : a.toString();
    }

    private static String hex(byte[] bytes) {
        StringBuilder out = new StringBuilder(bytes.length * 2);
        for (byte b : bytes) out.append(String.format("%02x", b & 0xff));
        return out.toString();
    }

    private static void write(File file, String text) throws Exception {
        File parent = file.getParentFile();
        if (parent != null) parent.mkdirs();
        try (BufferedWriter out = new BufferedWriter(
                new OutputStreamWriter(new FileOutputStream(file), StandardCharsets.UTF_8))) {
            out.write(text);
        }
    }

    private static boolean inside(Function f, Address a) {
        return a != null && f.getBody().contains(a);
    }

    private static class Block {
        List<Instruction> instructions = new ArrayList<Instruction>();
        int id;
        String start;
        String end;
    }

    private String referencesJson(Reference[] refs) {
        StringBuilder out = new StringBuilder("[");
        boolean first = true;
        for (Reference ref : refs) {
            if (!first) out.append(',');
            first = false;
            RefType type = ref.getReferenceType();
            out.append("{\"to\":").append(q(addr(ref.getToAddress())))
               .append(",\"kind\":").append(q(type.toString()))
               .append(",\"operand\":").append(ref.getOperandIndex())
               .append(",\"call\":").append(type.isCall())
               .append(",\"jump\":").append(type.isJump())
               .append(",\"data\":").append(type.isData())
               .append(",\"read\":").append(type.isRead())
               .append(",\"write\":").append(type.isWrite())
               .append('}');
        }
        return out.append(']').toString();
    }

    private String addressesJson(Address[] addresses) {
        StringBuilder out = new StringBuilder("[");
        boolean first = true;
        if (addresses != null) {
            for (Address a : addresses) {
                if (!first) out.append(',');
                first = false;
                out.append(q(addr(a)));
            }
        }
        return out.append(']').toString();
    }

    private void exportOne(String requested, File outputDir, int timeout,
                           DecompInterface decomp, DecompInterface normalize,
                           List<String> summary) throws Exception {
        Address requestedAddress = toAddr(requested.replaceFirst("^0[xX]", ""));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function f = fm.getFunctionAt(requestedAddress);
        if (f == null) f = fm.getFunctionContaining(requestedAddress);

        if (f == null) {
            String missing = "{\"requested_entry\":" + q(requested) +
                ",\"status\":\"FUNCTION_NOT_FOUND\"}\n";
            write(new File(outputDir, requested + ".json"), missing);
            summary.add("{\"requested_entry\":" + q(requested) +
                ",\"status\":\"FUNCTION_NOT_FOUND\"}");
            return;
        }

        Listing listing = currentProgram.getListing();
        ReferenceManager refs = currentProgram.getReferenceManager();
        List<Instruction> instructions = new ArrayList<Instruction>();
        InstructionIterator iterator = listing.getInstructions(f.getBody(), true);
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        StringBuilder assembly = new StringBuilder();
        long instructionBytes = 0;

        while (iterator.hasNext()) {
            Instruction ins = iterator.next();
            instructions.add(ins);
            byte[] raw = ins.getBytes();
            digest.update(raw);
            instructionBytes += raw.length;
            assembly.append(addr(ins.getAddress())).append("  ")
                .append(hex(raw)).append("  ").append(ins.toString())
                .append("  ; flow=").append(ins.getFlowType().toString())
                .append(" fallthrough=").append(addr(ins.getFallThrough()))
                .append(" flows=").append(addressesJson(ins.getFlows()))
                .append('\n');
        }

        // Recover basic blocks from instruction flow targets and fall-throughs.
        Set<String> leaders = new HashSet<String>();
        if (!instructions.isEmpty()) leaders.add(addr(instructions.get(0).getAddress()));
        for (Instruction ins : instructions) {
            if (ins.getFlowType().isJump() && !ins.getFlowType().isCall()) {
                Address[] flows = ins.getFlows();
                if (flows != null) {
                    for (Address target : flows) {
                        if (inside(f, target)) leaders.add(addr(target));
                    }
                }
                Address fall = ins.getFallThrough();
                if (inside(f, fall)) leaders.add(addr(fall));
            }
        }

        List<Block> blocks = new ArrayList<Block>();
        Block current = null;
        Instruction previous = null;
        for (Instruction ins : instructions) {
            boolean start = current == null || leaders.contains(addr(ins.getAddress()));
            if (previous != null) {
                Address expectedNext = previous.getAddress().add(previous.getLength());
                if (!expectedNext.equals(ins.getAddress())) start = true;
            }
            if (start) {
                current = new Block();
                current.id = blocks.size();
                current.start = addr(ins.getAddress());
                blocks.add(current);
            }
            current.instructions.add(ins);
            current.end = addr(ins.getAddress());
            previous = ins;
        }

        Map<String, Integer> blockByAddress = new HashMap<String, Integer>();
        for (Block block : blocks) {
            for (Instruction ins : block.instructions) {
                blockByAddress.put(addr(ins.getAddress()), block.id);
            }
        }

        List<String> edgeJson = new ArrayList<String>();
        Set<String> edgeKeys = new LinkedHashSet<String>();
        for (Block block : blocks) {
            Instruction last = block.instructions.get(block.instructions.size() - 1);
            if (last.getFlowType().isJump() && !last.getFlowType().isCall()) {
                Address[] flows = last.getFlows();
                if (flows != null) {
                    for (Address target : flows) {
                        Integer toBlock = blockByAddress.get(addr(target));
                        if (toBlock != null) {
                            String key = block.id + ":" + toBlock + ":BRANCH";
                            if (edgeKeys.add(key)) edgeJson.add(
                                "{\"from\":" + block.id + ",\"to\":" + toBlock +
                                ",\"kind\":\"BRANCH\"}");
                        }
                    }
                }
            }
            Address fall = last.getFallThrough();
            Integer fallBlock = blockByAddress.get(addr(fall));
            if (fallBlock != null) {
                String key = block.id + ":" + fallBlock + ":FALLTHROUGH";
                if (edgeKeys.add(key)) edgeJson.add(
                    "{\"from\":" + block.id + ",\"to\":" + fallBlock +
                    ",\"kind\":\"FALLTHROUGH\"}");
            }
        }

        List<String> callerJson = new ArrayList<String>();
        ReferenceIterator incoming = refs.getReferencesTo(f.getEntryPoint());
        while (incoming.hasNext()) {
            Reference ref = incoming.next();
            Function caller = fm.getFunctionContaining(ref.getFromAddress());
            callerJson.add("{\"from\":" + q(addr(ref.getFromAddress())) +
                ",\"caller_entry\":" + q(caller == null ? null : addr(caller.getEntryPoint())) +
                ",\"caller_name\":" + q(caller == null ? null : caller.getName()) +
                ",\"kind\":" + q(ref.getReferenceType().toString()) +
                ",\"call\":" + ref.getReferenceType().isCall() + "}");
        }

        List<String> calleeJson = new ArrayList<String>();
        Set<String> seenCallees = new LinkedHashSet<String>();
        for (Instruction ins : instructions) {
            for (Reference ref : refs.getReferencesFrom(ins.getAddress())) {
                if (!ref.getReferenceType().isCall()) continue;
                Function callee = fm.getFunctionAt(ref.getToAddress());
                if (callee == null) callee = fm.getFunctionContaining(ref.getToAddress());
                String key = addr(ins.getAddress()) + ":" + addr(ref.getToAddress());
                if (!seenCallees.add(key)) continue;
                calleeJson.add("{\"from\":" + q(addr(ins.getAddress())) +
                    ",\"to\":" + q(addr(ref.getToAddress())) +
                    ",\"callee_entry\":" + q(callee == null ? null : addr(callee.getEntryPoint())) +
                    ",\"callee_name\":" + q(callee == null ? null : callee.getName()) +
                    ",\"kind\":" + q(ref.getReferenceType().toString()) + "}");
            }
        }

        String defaultStatus = "FAILED";
        String defaultError = "";
        String normalizeStatus = "NOT_ATTEMPTED";
        String normalizeError = "";
        String selectedVariant = "";
        String cText = null;

        try {
            DecompileResults result = decomp.decompileFunction(f, timeout, monitor);
            if (result != null && result.decompileCompleted() &&
                    result.getDecompiledFunction() != null) {
                defaultStatus = "OK";
                cText = result.getDecompiledFunction().getC();
                selectedVariant = "default";
            } else {
                defaultError = result == null ? "null result" : result.getErrorMessage();
            }
        } catch (Exception ex) {
            defaultError = ex.toString();
        }

        if (!"OK".equals(defaultStatus)) {
            try {
                DecompileResults result = normalize.decompileFunction(f, timeout, monitor);
                if (result != null && result.decompileCompleted() &&
                        result.getDecompiledFunction() != null) {
                    normalizeStatus = "OK";
                    cText = result.getDecompiledFunction().getC();
                    selectedVariant = "normalize";
                } else {
                    normalizeStatus = "FAILED";
                    normalizeError = result == null ? "null result" : result.getErrorMessage();
                }
            } catch (Exception ex) {
                normalizeStatus = "EXCEPTION";
                normalizeError = ex.toString();
            }
        }

        if (cText != null) write(new File(outputDir, requested + ".c"), cText);

        String instructionHash = hex(digest.digest());
        StringBuilder json = new StringBuilder();
        json.append("{\n")
            .append("\"game\":").append(q(currentProgram.getName())).append(",\n")
            .append("\"requested_entry\":").append(q(requested)).append(",\n")
            .append("\"entry\":").append(q(addr(f.getEntryPoint()))).append(",\n")
            .append("\"name\":").append(q(f.getName())).append(",\n")
            .append("\"namespace\":").append(q(f.getParentNamespace().getName(true))).append(",\n")
            .append("\"signature\":").append(q(f.getSignature().toString())).append(",\n")
            .append("\"body_min\":").append(q(addr(f.getBody().getMinAddress()))).append(",\n")
            .append("\"body_max\":").append(q(addr(f.getBody().getMaxAddress()))).append(",\n")
            .append("\"body_bytes\":").append(f.getBody().getNumAddresses()).append(",\n")
            .append("\"instruction_count\":").append(instructions.size()).append(",\n")
            .append("\"instruction_bytes\":").append(instructionBytes).append(",\n")
            .append("\"instruction_stream_sha256\":").append(q(instructionHash)).append(",\n")
            .append("\"decompilation\":{\"default_status\":").append(q(defaultStatus))
            .append(",\"default_error\":").append(q(defaultError))
            .append(",\"normalize_status\":").append(q(normalizeStatus))
            .append(",\"normalize_error\":").append(q(normalizeError))
            .append(",\"selected_variant\":").append(q(selectedVariant))
            .append(",\"timeout_seconds_per_attempt\":").append(timeout).append("},\n")
            .append("\"instructions\":[");
        boolean first = true;
        for (Instruction ins : instructions) {
            if (!first) json.append(',');
            first = false;
            byte[] raw = ins.getBytes();
            json.append("{\"address\":").append(q(addr(ins.getAddress())))
                .append(",\"bytes_hex\":").append(q(hex(raw)))
                .append(",\"mnemonic\":").append(q(ins.getMnemonicString()))
                .append(",\"display\":").append(q(ins.toString()))
                .append(",\"flow_type\":").append(q(ins.getFlowType().toString()))
                .append(",\"fallthrough\":").append(q(addr(ins.getFallThrough())))
                .append(",\"flows\":").append(addressesJson(ins.getFlows()))
                .append(",\"references\":").append(referencesJson(
                    refs.getReferencesFrom(ins.getAddress())))
                .append('}');
        }
        json.append("],\n\"blocks\":[");
        first = true;
        for (Block block : blocks) {
            if (!first) json.append(',');
            first = false;
            json.append("{\"id\":").append(block.id)
                .append(",\"start\":").append(q(block.start))
                .append(",\"end\":").append(q(block.end))
                .append(",\"instruction_count\":").append(block.instructions.size())
                .append('}');
        }
        json.append("],\n\"cfg_edges\":[")
            .append(String.join(",", edgeJson)).append("],\n")
            .append("\"callers\":[").append(String.join(",", callerJson)).append("],\n")
            .append("\"callees\":[").append(String.join(",", calleeJson)).append("]\n}\n");

        write(new File(outputDir, requested + ".json"), json.toString());
        write(new File(outputDir, requested + ".asm.txt"), assembly.toString());
        summary.add("{\"requested_entry\":" + q(requested) +
            ",\"entry\":" + q(addr(f.getEntryPoint())) +
            ",\"name\":" + q(f.getName()) +
            ",\"default_status\":" + q(defaultStatus) +
            ",\"normalize_status\":" + q(normalizeStatus) +
            ",\"selected_variant\":" + q(selectedVariant) +
            ",\"instruction_count\":" + instructions.size() +
            ",\"instruction_stream_sha256\":" + q(instructionHash) + "}");
        println("Target " + requested + " => " + defaultStatus +
            (normalizeStatus.equals("NOT_ATTEMPTED") ? "" : " / normalize=" + normalizeStatus) +
            " instructions=" + instructions.size() + " callers=" + callerJson.size());
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 3) {
            throw new IllegalArgumentException(
                "Usage: <output-directory> <comma-separated-RVAs> <timeout-seconds>");
        }
        File outputDir = new File(args[0]).getAbsoluteFile();
        outputDir.mkdirs();
        int timeout = Integer.parseInt(args[2]);
        if (timeout < 1 || timeout > 300) throw new IllegalArgumentException("Bad timeout");

        DecompileOptions options = new DecompileOptions();
        DecompInterface decomp = new DecompInterface();
        DecompInterface normalize = new DecompInterface();
        decomp.setOptions(options);
        normalize.setOptions(options);
        normalize.setSimplificationStyle("normalize");
        if (!decomp.openProgram(currentProgram)) {
            throw new IllegalStateException("Cannot open default decompiler");
        }
        if (!normalize.openProgram(currentProgram)) {
            decomp.dispose();
            throw new IllegalStateException("Cannot open normalize decompiler");
        }

        List<String> summary = new ArrayList<String>();
        try {
            for (String raw : args[1].split(",")) {
                String requested = raw.trim().toLowerCase();
                if (requested.isEmpty()) continue;
                monitor.setMessage("Targeted SV400 analysis: " + requested);
                exportOne(requested, outputDir, timeout, decomp, normalize, summary);
                monitor.checkCancelled();
            }
            write(new File(outputDir, "summary.json"),
                "{\n\"program\":" + q(currentProgram.getName()) +
                ",\n\"image_base\":" + q(addr(currentProgram.getImageBase())) +
                ",\n\"results\":[\n" + String.join(",\n", summary) + "\n]\n}\n");
        } finally {
            normalize.dispose();
            decomp.dispose();
        }
    }
}
