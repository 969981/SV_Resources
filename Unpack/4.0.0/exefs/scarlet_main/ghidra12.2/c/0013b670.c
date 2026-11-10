/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013b670; name: FUN_0013b670
 */


void FUN_0013b670(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if ((*(byte *)(puVar3 + 0xb) & 0xf) == 0) {
    FUN_001281f0(param_1,1,0);
  }
  FUN_0012a550(param_1);
  FUN_0012d6c0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
               (long)*(int *)(*(long *)(param_1 + 0x18) + 0x3c) << 3);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x20) = param_1 + 0x60;
    lVar2 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar2 != 0) {
      do {
        lVar1 = *(long *)(lVar2 + 0x18);
        FUN_0012d6c0(param_1,lVar2,0x40);
        *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar1 = *(long *)(param_1 + 0x30);
    }
    FUN_0012d6c0(param_1,lVar1,
                 ((*(long *)(param_1 + 0x28) - lVar1) * 0x10000000 + 0x500000000 >> 0x20) << 4);
  }
                    /* WARNING: Could not recover jumptable at 0x0013b748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(puVar3[1],param_1 + -8,0x658,0);
  return;
}


