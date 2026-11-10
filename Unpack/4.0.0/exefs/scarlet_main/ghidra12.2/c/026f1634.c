/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f1634; name: FUN_026f1634
 */


void FUN_026f1634(long param_1,uint *param_2,int param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint **local_40;
  int *piStack_38;
  uint *local_30;
  uint *local_28;
  int local_8;
  uint uStack_4;
  
  local_28 = param_2 + 1;
  uStack_4 = *param_2;
  local_8 = param_3 + -4;
  plVar4 = *(long **)(param_1 + 0x8068);
  plVar1 = *(long **)(param_1 + 0x8070);
  if (plVar4 == plVar1) {
LAB_026f169c:
    if ((plVar4 != plVar1) &&
       (((plVar4[2] != 0 && (lVar5 = *(long *)(plVar4[2] + 0x10), lVar5 != 0)) &&
        (uVar2 = (**(code **)(*(long *)(lVar5 + -0x28) + 0xd8))(), (uVar2 & 1) != 0)))) {
      lVar3 = FUN_0265dff4(lVar5 + 0xe0,&local_40);
      if ((lVar3 != 0) && (uVar2 = FUN_026d5e08(), (uVar2 & 1) == 0)) {
        local_40 = &local_28;
        piStack_38 = &local_8;
        local_30 = &uStack_4;
        FUN_026f1708(lVar5 + 0xe0,&local_40);
      }
    }
  }
  else {
    do {
      if ((*plVar4 == param_4) && ((uint)*(ushort *)(plVar4 + 1) == (uStack_4 & 0xffff)))
      goto LAB_026f169c;
      plVar4 = plVar4 + 4;
    } while (plVar1 != plVar4);
  }
  return;
}


