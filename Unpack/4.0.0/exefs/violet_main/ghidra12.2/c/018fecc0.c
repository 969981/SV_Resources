/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fecc0; name: FUN_018fecc0
 */


void FUN_018fecc0(undefined8 param_1,char *param_2,ushort *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ErrorResultVariant *this;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  if ((*param_2 != '\0') || ((char)param_3[3] == -1)) {
    local_68[0] = 0;
    local_58[0] = 0x10402;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    piVar6 = local_58;
    goto LAB_018fede4;
  }
  uVar1 = *(undefined4 *)param_3;
  *(undefined4 *)(param_2 + 0x1b) = *(undefined4 *)((long)param_3 + 3);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  local_58[0] = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
  uVar4 = FUN_018fe360();
  if ((uVar4 & 1) == 0) {
    local_68[0] = 0x10408;
    this = (ErrorResultVariant *)((ulong)local_68 | 4);
  }
  else {
    uVar4 = FUN_007e6070();
    if (((uVar4 & 1) != 0) && (*(long *)PTR_DAT_047d0860 != 0)) {
      FUN_007cb140(local_68);
      FUN_018ff39c(local_58,local_68);
      if (local_58[0] == 0) {
        FUN_007cb2f0(local_68);
        FUN_018ff39c(local_58,local_68);
        if (local_58[0] == 0) {
          if ((ulong)(byte)param_3[3] == 0) {
            uVar5 = FUN_00789ed0((ulong)*param_3 * 4);
            *(undefined8 *)(param_2 + 8) = uVar5;
            uVar5 = FUN_00789ed0((ulong)param_3[1] << 2);
            *(undefined8 *)(param_2 + 0x10) = uVar5;
            if (*param_3 != 0) {
              lVar9 = 0;
              uVar4 = 0;
              do {
                FUN_007cad98(local_68,param_2,*(long *)(param_2 + 8) + lVar9,uVar4 & 0xffffffff,0,
                             param_3[2]);
                FUN_018ff39c(local_58,local_68);
                if (local_58[0] != 0) goto LAB_018ff000;
                uVar4 = uVar4 + 1;
                lVar9 = lVar9 + 4;
              } while (uVar4 < *param_3);
            }
            if (param_3[1] != 0) {
              lVar9 = 0;
              uVar4 = 0;
              do {
                FUN_007caf6c(local_68,param_2,*(long *)(param_2 + 0x10) + lVar9,uVar4 & 0xffffffff,0
                             ,param_3[2]);
                FUN_018ff39c(local_58,local_68);
                if (local_58[0] != 0) goto LAB_018ff000;
                uVar4 = uVar4 + 1;
                lVar9 = lVar9 + 4;
              } while (uVar4 < param_3[1]);
            }
          }
          else {
            uVar5 = FUN_00789ed0((ulong)*param_3 * 4 * (ulong)(byte)param_3[3]);
            *(undefined8 *)(param_2 + 8) = uVar5;
            uVar5 = FUN_00789ed0((ulong)param_3[1] * (ulong)(byte)param_3[3] * 4);
            *(undefined8 *)(param_2 + 0x10) = uVar5;
            puVar3 = PTR_DAT_047d1170;
            if ((char)param_3[3] != '\0') {
              uVar10 = 0;
              do {
                bVar2 = *puVar3;
                uVar7 = (uint)*param_3;
                if (*param_3 != 0) {
                  uVar8 = 0;
                  do {
                    FUN_007cad98(local_68,param_2,
                                 *(long *)(param_2 + 8) + (ulong)(uVar8 + uVar10 * uVar7) * 4,uVar8,
                                 bVar2 + uVar10,param_3[2]);
                    FUN_018ff39c(local_58,local_68);
                    if (local_58[0] != 0) goto LAB_018ff000;
                    uVar7 = (uint)*param_3;
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < uVar7);
                }
                uVar7 = (uint)param_3[1];
                if (param_3[1] != 0) {
                  uVar8 = 0;
                  do {
                    FUN_007caf6c(local_68,param_2,
                                 *(long *)(param_2 + 0x10) + (ulong)(uVar8 + uVar10 * uVar7) * 4,
                                 uVar8,bVar2 + uVar10,param_3[2]);
                    FUN_018ff39c(local_58,local_68);
                    if (local_58[0] != 0) goto LAB_018ff000;
                    uVar7 = (uint)param_3[1];
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < uVar7);
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < (byte)param_3[3]);
            }
          }
          FUN_007cb250(local_68);
          FUN_018ff39c(local_58,local_68);
          if (local_58[0] != 0) {
LAB_018ff000:
            FUN_007cb250(local_68);
            piVar6 = local_58;
            goto LAB_018fede4;
          }
          this = (ErrorResultVariant *)((ulong)local_68 | 4);
          *param_2 = '\x01';
          local_68[0] = 0;
          goto LAB_018fedd4;
        }
      }
      piVar6 = local_58;
      goto LAB_018fede4;
    }
    local_68[0] = 0x10408;
    this = (ErrorResultVariant *)((ulong)local_68 | 4);
  }
LAB_018fedd4:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_48);
  piVar6 = local_68;
LAB_018fede4:
  FUN_00cbd7c0(param_1,piVar6);
  return;
}


