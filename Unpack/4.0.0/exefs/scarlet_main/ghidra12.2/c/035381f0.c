/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035381f0; name: FUN_035381f0
 */


void FUN_035381f0(long param_1)

{
  long lVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_30;
  long lStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_40 = 0xff00;
  local_20 = 0;
  local_30 = 0;
  local_18 = 0;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x60);
  local_48 = *(undefined8 *)(lVar1 + 0x30);
  local_1c = 2;
  lStack_28 = (ulong)*(uint *)(lVar1 + 0x2c) << 0x20;
  (**(code **)(**(long **)(param_1 + 0x80) + 0x148))
            (*(long **)(param_1 + 0x80),&local_48,param_1 + 0x90,1);
  return;
}


