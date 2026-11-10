/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00303630; name: FUN_00303630
 */


void FUN_00303630(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (*(ulong *)(param_1 + 0x158) < uVar2) {
    uVar3 = *(ulong *)(param_1 + 0x158) * 2;
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    *(ulong *)(param_1 + 0x158) = uVar2;
    uVar1 = FUN_0038c7f0(*(undefined8 *)(param_1 + 0x150),uVar2 << 4);
    *(undefined8 *)(param_1 + 0x150) = uVar1;
    uVar2 = *(ulong *)(param_2 + 0x10);
  }
  if (uVar2 != 0) {
    lVar4 = 0;
    puVar5 = (ulong *)(*(long *)(param_2 + 8) + 8);
    do {
      if (puVar5[-1] == 0) {
        lVar6 = *(long *)(param_1 + 0x150);
        *(byte **)(lVar6 + lVar4) = (byte *)((long)puVar5 + 1);
        uVar3 = (ulong)(byte)*puVar5;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x150);
        *(ulong *)(lVar6 + lVar4) = puVar5[1];
        uVar3 = *puVar5;
      }
      lVar6 = lVar6 + lVar4;
      lVar4 = lVar4 + 0x10;
      *(ulong *)(lVar6 + 8) = uVar3;
      uVar2 = uVar2 - 1;
      puVar5 = puVar5 + 4;
    } while (uVar2 != 0);
  }
  return;
}


