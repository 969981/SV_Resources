/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00888360; name: FUN_00888360
 */


undefined8 FUN_00888360(long param_1,uint *param_2,ulong param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  pbVar1 = (byte *)(param_1 + (param_3 & 0xffffffff) + 0x1888);
  bVar3 = *pbVar1;
  uVar7 = (uint)bVar3;
  if (bVar3 != 0) {
    lVar11 = *(long *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x18a8);
    uVar10 = 0;
    do {
      uVar6 = (ulong)*(byte *)(lVar11 + uVar10);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x1c30) + uVar6 * 4);
      uVar8 = (ulong)uVar2;
      if (uVar2 == 0) {
LAB_00888418:
        if (*(char *)(param_1 + 0x1bd1) == '\0') {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(param_1 + 0x1bd8))();
          uVar6 = (ulong)*(byte *)(lVar11 + uVar10);
        }
        FUN_008889b0(param_1,uVar6,iVar4);
        uVar8 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                          ((int)*(undefined8 *)(param_1 + 0x10) + iVar4 * 0xb8);
        if ((uVar8 & 1) != 0) {
          uVar7 = (uint)*(byte *)(lVar11 + uVar10);
          uVar5 = 1;
          goto LAB_00888474;
        }
        uVar7 = (uint)*pbVar1;
      }
      else if (0 < (int)uVar2) {
        lVar9 = uVar6 << 6;
        do {
          uVar2 = *(uint *)(*(long *)(param_1 + 0x1c38) + lVar9);
          if (((uVar2 & 0x7fffffff) <= param_4) &&
             (param_4 <= *(uint *)(*(long *)(param_1 + 0x1c40) + lVar9))) {
            if (-1 < (int)uVar2) goto LAB_00888418;
            break;
          }
          uVar8 = uVar8 - 1;
          lVar9 = lVar9 + 4;
        } while (uVar8 != 0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (byte)uVar7);
    uVar7 = 0;
  }
  uVar5 = 0;
LAB_00888474:
  *param_2 = uVar7;
  return uVar5;
}


