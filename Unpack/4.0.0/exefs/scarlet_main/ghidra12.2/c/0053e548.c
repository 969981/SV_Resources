/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053e548; name: FUN_0053e548
 */


void FUN_0053e548(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  FUN_01cfa410(param_1 + 0x90);
  lVar2 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x88);
    FUN_00577168(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,0x38,8);
  }
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
              (*(long **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x70),
               *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
               *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0053e61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
            (*(long **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),
             *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffe,1);
  return;
}


