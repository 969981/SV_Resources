/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e03a0; name: FUN_007e03a0
 */


void FUN_007e03a0(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ushort *puVar6;
  long *plVar7;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_007de240(param_2 + 8);
  bVar1 = FUN_007e10ac(uVar5,uVar2);
  if (bVar1 != 0xff) {
    puVar6 = *(ushort **)(param_1 + 8);
    if ((ushort)bVar1 < *puVar6) {
      plVar7 = (long *)(*(long *)(puVar6 + 4) + (ulong)bVar1 * 0x20);
      lVar4 = *plVar7;
    }
    else {
      plVar7 = (long *)0x0;
      lVar4 = lRam0000000000000000;
    }
    if ((lVar4 != 0) && (plVar7[1] != 0)) {
      uVar3 = FUN_0078fa50(puVar6 + 8,(long)*(int *)(puVar6 + 0x12) + (long)plVar7);
      if ((uVar3 & 1) != 0) {
        FUN_0078fa2c(puVar6 + 8,(long)*(int *)(puVar6 + 0x12) + (long)plVar7);
        return;
      }
    }
  }
  return;
}


