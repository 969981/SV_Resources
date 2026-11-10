/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e0c68; name: FUN_008e0c68
 */


undefined8
FUN_008e0c68(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5,
            undefined4 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  long local_48;
  int local_24;
  
  local_24 = 0;
  local_48 = 0;
  FUN_008e5f68(*(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x4c),*param_1,&local_48,&local_24,
               param_3,*(undefined1 *)(*(long *)(*(long *)(param_3 + 0x238) + 0x10) + 0x751),
               *param_6);
  if (local_24 == 0) {
    uVar2 = 0;
  }
  else {
    if (0 < local_24) {
      if (param_5 == (long *)0x0) {
        lVar6 = 4;
        lVar5 = 0;
        iVar4 = local_24;
        do {
          lVar1 = *(long *)(param_3 + 0xb0) + (long)*(int *)(local_48 + lVar6) * 0x20;
          fVar7 = *(float *)(lVar1 + 0xc);
          if (((*(float *)(param_3 + 0x44) - *(float *)(lVar1 + 8) <= fVar7) &&
              (*(int *)(*(long *)(param_3 + 0xb0) + (long)*(int *)(local_48 + lVar6) * 0x20) != 0))
             && (0.0 < fVar7)) {
            FUN_008f09c8(param_2,4,4,0,1);
            iVar4 = local_24;
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar5 < iVar4);
      }
      else {
        lVar5 = 0;
        lVar6 = 4;
        iVar4 = local_24;
        do {
          lVar3 = (long)*(int *)(local_48 + lVar6);
          lVar1 = *(long *)(param_3 + 0xb0) + lVar3 * 0x20;
          fVar7 = *(float *)(lVar1 + 0xc);
          if (((*(float *)(param_3 + 0x44) - *(float *)(lVar1 + 8) <= fVar7) &&
              (*(int *)(*(long *)(param_3 + 0xb0) + lVar3 * 0x20) != 0)) && (0.0 < fVar7)) {
            (**(code **)(*param_5 + 0x60))(param_5,param_2,1,lVar3,*(undefined1 *)(param_3 + 8));
            iVar4 = local_24;
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar5 < iVar4);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


