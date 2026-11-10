// Ghidra native Headless post-script for the original SV 4.0.0 ARM64 ELF.
// Usage: -postScript SV400Export.java <output.ndjson.gz> [all|none] [timeout-seconds]
// Emits all Ghidra-discovered memory blocks, functions, instructions,
// data, symbols and references; optionally per-function decompiled C.
// The project itself remains authoritative for full program state.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;
import java.util.zip.GZIPOutputStream;

public class SV400Export extends GhidraScript {
    private BufferedWriter output;
    private long events = 0;
    private long functions = 0;
    private long instructions = 0;
    private long references = 0;
    private long symbols = 0;
    private long definedData = 0;
    private long decompiled = 0;
    private long decompileFailed = 0;

    private static String q(String s) {
        if (s == null) return "null";
        StringBuilder b = new StringBuilder(s.length() + 8);
        b.append('"');
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch(c) {
                case '"': b.append("\\\""); break;
                case '\\': b.append("\\\\"); break;
                case '\n': b.append("\\n"); break;
                case '\r': b.append("\\r"); break;
                case '\t': b.append("\\t"); break;
                default:
                    if (c < 0x20) {
                        b.append(String.format("\\u%04x", (int)c));
                    } else {
                        b.append(c);
                    }
            }
        }
        return b.append('"').toString();
    }

    private static String json(Object v) {
        if (v == null) return "null";
        if (v instanceof Boolean || v instanceof Number) return v.toString();
        if (v instanceof Map) {
            StringBuilder b = new StringBuilder("{");
            boolean first = true;
            for (Object entryObject : ((Map<?, ?>)v).entrySet()) {
                Map.Entry<?, ?> entry = (Map.Entry<?, ?>)entryObject;
                if (!first) b.append(',');
                first = false;
                b.append(q(String.valueOf(entry.getKey()))).append(':').append(json(entry.getValue()));
            }
            return b.append('}').toString();
        }
        if (v instanceof Iterable) {
            StringBuilder b = new StringBuilder("[");
            boolean first = true;
            for (Object entry : (Iterable<?>)v) {
                if (!first) b.append(',');
                first = false;
                b.append(json(entry));
            }
            return b.append(']').toString();
        }
        return q(String.valueOf(v));
    }

    private static LinkedHashMap<String,Object> row(String type) {
        LinkedHashMap<String,Object> r = new LinkedHashMap<String,Object>();
        r.put("type", type);
        return r;
    }

    private static String addr(Address a) {
        return a == null ? null : a.toString();
    }

    private static String clipped(Object o, int n) {
        if (o == null) return null;
        String t = String.valueOf(o);
        return t.length() > n ? t.substring(0, n) : t;
    }

    private static String bytesHex(byte[] bytes) {
        StringBuilder s = new StringBuilder(bytes.length * 2);
        for (byte b : bytes) s.append(String.format("%02x", b & 0xff));
        return s.toString();
    }

    private void emit(Map<String,Object> r) throws IOException {
        output.write(json(r));
        output.write('\n');
        events++;
        if ((events % 25000) == 0) output.flush();
    }

    private void refsAt(ReferenceManager rm, Address origin) throws IOException {
        for (Reference ref : rm.getReferencesFrom(origin)) {
            LinkedHashMap<String,Object> r = row("reference");
            r.put("from", addr(ref.getFromAddress()));
            r.put("to", addr(ref.getToAddress()));
            r.put("kind", ref.getReferenceType().toString());
            r.put("op_index", ref.getOperandIndex());
            r.put("is_call", ref.getReferenceType().isCall());
            r.put("is_jump", ref.getReferenceType().isJump());
            r.put("is_data", ref.getReferenceType().isData());
            r.put("is_read", ref.getReferenceType().isRead());
            r.put("is_write", ref.getReferenceType().isWrite());
            r.put("primary", ref.isPrimary());
            emit(r);
            references++;
        }
    }

    private void exportMemory() throws Exception {
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            LinkedHashMap<String,Object> r = row("memory");
            r.put("name", b.getName());
            r.put("start", addr(b.getStart()));
            r.put("end", addr(b.getEnd()));
            r.put("length", b.getSize());
            r.put("execute", b.isExecute());
            r.put("read", b.isRead());
            r.put("write", b.isWrite());
            r.put("initialized", b.isInitialized());
            emit(r);
        }
    }

    private void exportFunctions(DecompInterface decomp, boolean all, int timeout) throws Exception {
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            Function f = iterator.next();
            LinkedHashMap<String,Object> r = row("function");
            r.put("entry", addr(f.getEntryPoint()));
            r.put("name", f.getName());
            r.put("namespace", f.getParentNamespace().getName(true));
            r.put("body_min", addr(f.getBody().getMinAddress()));
            r.put("body_max", addr(f.getBody().getMaxAddress()));
            r.put("body_bytes", f.getBody().getNumAddresses());
            r.put("signature", clipped(f.getSignature(), 2048));
            r.put("thunk", f.isThunk());
            r.put("external", f.isExternal());
            r.put("source", f.getSymbol().getSource().toString());
            emit(r);
            functions++;

            if (all) {
                LinkedHashMap<String,Object> dec = row("decompile");
                dec.put("entry", addr(f.getEntryPoint()));
                try {
                    DecompileResults result = decomp.decompileFunction(f, timeout, monitor);
                    if (result != null && result.decompileCompleted()
                            && result.getDecompiledFunction() != null) {
                        dec.put("status", "OK");
                        dec.put("c", result.getDecompiledFunction().getC());
                        decompiled++;
                    } else {
                        dec.put("status", "FAILED");
                        dec.put("error", clipped(result == null ? "null result" : result.getErrorMessage(), 2048));
                        decompileFailed++;
                    }
                } catch (Exception ex) {
                    dec.put("status", "EXCEPTION");
                    dec.put("error", clipped(ex.toString(), 2048));
                    decompileFailed++;
                }
                emit(dec);
            }
            if ((functions % 256) == 0) {
                monitor.checkCancelled();
                if (all) println("decompiled " + functions + " functions; successful=" + decompiled);
            }
        }
    }

    private void exportInstructions() throws Exception {
        InstructionIterator iterator = currentProgram.getListing().getInstructions(true);
        while (iterator.hasNext()) {
            Instruction ins = iterator.next();
            LinkedHashMap<String,Object> r = row("instruction");
            r.put("address", addr(ins.getAddress()));
            r.put("length", ins.getLength());
            r.put("mnemonic", ins.getMnemonicString());
            r.put("display", clipped(ins.toString(), 4096));
            r.put("flow_type", ins.getFlowType().toString());
            r.put("fallthrough", addr(ins.getFallThrough()));
            try {
                r.put("bytes_hex", bytesHex(ins.getBytes()));
            } catch (Exception e) {
                r.put("bytes_hex", null);
                r.put("read_error", clipped(e.toString(), 300));
            }
            emit(r);
            instructions++;
            if ((instructions % 16384) == 0) monitor.checkCancelled();
        }
    }

    private void exportDefinedData() throws Exception {
        DataIterator iterator = currentProgram.getListing().getDefinedData(true);
        while (iterator.hasNext()) {
            Data d = iterator.next();
            LinkedHashMap<String,Object> r = row("data");
            r.put("address", addr(d.getAddress()));
            r.put("length", d.getLength());
            r.put("datatype", d.getDataType().getDisplayName());
            Object value = null;
            try { value = d.getValue(); } catch (Exception ignored) {}
            // Preserve full string only; non-string values are short previews.
            r.put("value", value instanceof String ? value : clipped(value, 1024));
            r.put("is_string", value instanceof String);
            emit(r);
            definedData++;
            if ((definedData % 16384) == 0) monitor.checkCancelled();
        }
    }

    // Enumerate *every* Ghidra reference source, including addresses not defined
    // as an instruction or typed data start. Iterate the full program memory
    // AddressSetView: Ghidra's DB adapter throws NPE for null despite API docs.
    private void exportReferences(ReferenceManager rm) throws Exception {
        AddressIterator origins = rm.getReferenceSourceIterator(currentProgram.getMemory(), true);
        long sources = 0;
        while (origins.hasNext()) {
            refsAt(rm, origins.next());
            sources++;
            if ((sources % 16384) == 0) monitor.checkCancelled();
        }
    }

    private void exportSymbols() throws Exception {
        SymbolIterator iterator = currentProgram.getSymbolTable().getAllSymbols(true);
        while (iterator.hasNext()) {
            Symbol s = iterator.next();
            LinkedHashMap<String,Object> r = row("symbol");
            r.put("address", addr(s.getAddress()));
            r.put("name", s.getName());
            r.put("namespace", s.getParentNamespace().getName(true));
            r.put("symbol_type", s.getSymbolType().toString());
            r.put("source", s.getSource().toString());
            r.put("primary", s.isPrimary());
            emit(r);
            symbols++;
            if ((symbols % 16384) == 0) monitor.checkCancelled();
        }
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new IllegalArgumentException("Output .ndjson.gz path required");
        File path = new File(args[0]).getAbsoluteFile();
        boolean all = args.length > 1 && args[1].equalsIgnoreCase("all");
        int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 15;
        if (timeout < 1 || timeout > 300) throw new IllegalArgumentException("Bad timeout");
        path.getParentFile().mkdirs();
        output = new BufferedWriter(new OutputStreamWriter(
                new GZIPOutputStream(new FileOutputStream(path), 1048576), StandardCharsets.UTF_8),
                1048576);
        DecompInterface decomp = null;
        boolean complete = false;
        try {
            LinkedHashMap<String,Object> meta = row("meta");
            meta.put("program", currentProgram.getName());
            meta.put("image_base", addr(currentProgram.getImageBase()));
            meta.put("language", currentProgram.getLanguage().getLanguageID().toString());
            meta.put("format", currentProgram.getExecutableFormat());
            meta.put("executable_path", currentProgram.getExecutablePath());
            meta.put("decompile_requested", all);
            meta.put("decompile_timeout_seconds", timeout);
            emit(meta);
            exportMemory();
            if (all) {
                decomp = new DecompInterface();
                if (!decomp.openProgram(currentProgram)) {
                    throw new IllegalStateException("Failed to initialize Ghidra decompiler");
                }
            }
            exportFunctions(decomp, all, timeout);
            ReferenceManager rm = currentProgram.getReferenceManager();
            exportInstructions();
            exportDefinedData();
            exportReferences(rm);
            exportSymbols();
            LinkedHashMap<String,Object> summary = row("summary");
            summary.put("functions", functions);
            summary.put("instructions", instructions);
            summary.put("references", references);
            summary.put("symbols", symbols);
            summary.put("defined_data", definedData);
            summary.put("decompiled_ok", decompiled);
            summary.put("decompiled_failed", decompileFailed);
            summary.put("decompile_requested", all);
            summary.put("complete", true);
            emit(summary);
            complete = true;
        } finally {
            if (decomp != null) decomp.dispose();
            output.close();
            println("SV400Export: " + (complete ? "COMPLETE" : "INCOMPLETE") +
                " funcs=" + functions + " instr=" + instructions +
                " refs=" + references + " decompiled=" + decompiled);
        }
    }
}
