/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052c2a8; name: FUN_0052c2a8
 */


undefined8 FUN_0052c2a8(long *param_1,ulong *param_2)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  int local_44;
  byte *local_38;
  
  lVar11 = 0;
  uVar10 = 0;
  do {
    if (lVar11 == 10) {
LAB_0052c3f4:
      uVar10 = 0;
      uVar4 = 0;
      goto LAB_0052c3fc;
    }
    pbVar5 = (byte *)*param_1;
    if ((byte *)*param_1 == (byte *)param_1[1]) {
      iVar6 = *(int *)((long)param_1 + 0x2c);
      do {
        while( true ) {
          if (((0 < iVar6) || (0 < *(int *)((long)param_1 + 0x1c))) ||
             ((int)param_1[3] == (int)param_1[5])) goto LAB_0052c3f4;
          plVar9 = (long *)param_1[2];
          do {
            uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,&local_38,&local_44);
            if ((uVar3 & 1) == 0) {
              uVar10 = 0;
              uVar4 = 0;
              *param_1 = 0;
              param_1[1] = 0;
              goto LAB_0052c3fc;
            }
          } while (local_44 == 0);
          pbVar7 = local_38 + local_44;
          iVar8 = (int)param_1[3];
          iVar6 = iVar8 - (0x7fffffff - local_44);
          *param_1 = (long)local_38;
          param_1[1] = (long)pbVar7;
          if (iVar6 == 0 || iVar8 < 0x7fffffff - local_44) {
            iVar8 = iVar8 + local_44;
          }
          else {
            pbVar7 = pbVar7 + -(long)iVar6;
            iVar8 = 0x7fffffff;
            *(int *)((long)param_1 + 0x1c) = iVar6;
            param_1[1] = (long)pbVar7;
          }
          pbVar7 = pbVar7 + *(int *)((long)param_1 + 0x2c);
          iVar1 = (int)param_1[6];
          if ((int)param_1[5] <= (int)param_1[6]) {
            iVar1 = (int)param_1[5];
          }
          iVar6 = iVar8 - iVar1;
          *(int *)(param_1 + 3) = iVar8;
          param_1[1] = (long)pbVar7;
          pbVar5 = local_38;
          if (iVar6 == 0 || iVar8 < iVar1) break;
          *(int *)((long)param_1 + 0x2c) = iVar6;
          param_1[1] = (long)(pbVar7 + -(long)iVar6);
          if (local_38 != pbVar7 + -(long)iVar6) goto LAB_0052c2e4;
        }
        iVar6 = 0;
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
      } while (local_38 == pbVar7);
    }
LAB_0052c2e4:
    bVar2 = *pbVar5;
    *param_1 = (long)(pbVar5 + 1);
    uVar10 = ((ulong)bVar2 & 0x7f) << (lVar11 * 7 & 0x3fU) | uVar10;
    lVar11 = lVar11 + 1;
  } while ((char)bVar2 < '\0');
  uVar4 = 1;
LAB_0052c3fc:
  *param_2 = uVar10;
  return uVar4;
}


