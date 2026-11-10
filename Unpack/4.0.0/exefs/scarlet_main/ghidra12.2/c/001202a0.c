/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001202a0; name: FUN_001202a0
 */


void FUN_001202a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  
  if (*(uint *)(param_1 + 0x2c) == *(uint *)(param_1 + 0x28)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x1202b0);
    (*pcVar3)();
  }
  lVar1 = ((ulong)(((int)*(long *)(param_1 + 0x20) - ((uint)(param_3 + 0x1fU) & 0x3e0)) + 0x20) &
          0x3e0) + (param_3 + 0x1fU & 0xffffffffffffffe0);
  *(long *)(param_1 + 0x20) = lVar1 + *(long *)(param_1 + 0x20);
  *(long *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x28) * 8) = lVar1;
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar2 + 1;
  *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 8) = param_2;
  return;
}


