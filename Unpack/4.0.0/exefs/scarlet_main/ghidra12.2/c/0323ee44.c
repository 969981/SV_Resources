/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0323ee44; name: FUN_0323ee44
 */


void FUN_0323ee44(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_38;
  long local_30;
  undefined8 local_28;
  
  local_38 = &PTR_LAB_046ab740;
  local_30 = 0;
  local_28 = -0x8000000000000000;
  uVar1 = FUN_0323f858(param_2,&local_38);
  (*(code *)local_38[0xc])(&local_38,uVar1);
  if (((int)param_2[4] != 0) &&
     ((*(code *)local_38[4])(&local_38,param_2[3] + 0x10,(int)param_2[4],0x18), 0 < (int)param_2[4])
     ) {
    lVar2 = 0;
    lVar4 = 0x10;
    do {
      *(undefined8 *)(param_2[3] + lVar4) = 0;
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar2 < (int)param_2[4]);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  lVar2 = local_28;
  uVar3 = (ulong)local_28._4_4_;
  local_38 = &PTR_LAB_046ab740;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_30 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_30,uVar3 << 3);
  }
  return;
}


