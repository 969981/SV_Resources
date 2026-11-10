/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03235c3c; name: FUN_03235c3c
 */


void FUN_03235c3c(long param_1,undefined8 *param_2,uint param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  if ((int)param_3 < 0x10) {
    lVar5 = (long)DAT_048857a4;
    lVar6 = tpidr_el0;
    lVar1 = *(long *)(lVar6 + 0x1000b8);
    if (lVar1 == 0) {
      lVar1 = FUN_00e5d3b4();
      *(long *)(lVar6 + 0x1000b8) = lVar1;
    }
    lVar6 = *(long *)(lVar1 + lVar5 * 8 + 1000);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x140) == param_1)) {
      iVar7 = *(int *)(lVar6 + 0x38);
      if (iVar7 < (int)param_3) {
        FUN_03235dac(*(undefined8 *)(param_1 + 0x28),*(long *)(lVar6 + 0x30) + (long)iVar7 * 8,0x10,
                     8);
        iVar3 = iVar7 + 0x10;
        iVar7 = *(int *)(lVar6 + 0x38);
        if ((iVar7 < iVar3) || (iVar3 < iVar7)) {
          *(int *)(lVar6 + 0x38) = iVar3;
          iVar7 = iVar3;
        }
      }
      if (0 < (int)param_3) {
        uVar2 = (ulong)param_3;
        iVar3 = -1;
        do {
          uVar2 = uVar2 - 1;
          puVar4 = *(undefined4 **)(*(long *)(lVar6 + 0x30) + (long)(iVar7 + iVar3) * 8);
          *(undefined8 *)(puVar4 + 1) = 0x4000000000010001;
          *(undefined8 *)(puVar4 + 6) = 0;
          *puVar4 = 0;
          *(undefined8 *)(puVar4 + 0x16) = 0;
          puVar4[10] = 0;
          puVar4[0x12] = 0;
          puVar4[4] = 0;
          *param_2 = puVar4;
          iVar7 = *(int *)(lVar6 + 0x38);
          param_2 = (undefined8 *)((long)param_2 + (long)param_4);
          iVar3 = iVar3 + -1;
        } while (uVar2 != 0);
      }
      *(uint *)(lVar6 + 0x38) = iVar7 - param_3;
      return;
    }
  }
  FUN_03235dac(*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4);
  return;
}


