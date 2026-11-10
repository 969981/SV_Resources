/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148112c; name: FUN_0148112c
 */


void FUN_0148112c(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  *param_2 = 0;
  plVar8 = (long *)FUN_014813f4(param_1,param_3[1]);
  cVar1 = (char)param_3[6];
  lVar12 = *(long *)(param_3 + 8);
  uVar9 = FUN_0124a808(param_1);
  if (((uVar9 & 1) != 0) && (uVar9 = FUN_014603fc(param_1), (uVar9 & 1) != 0)) {
    return;
  }
  FUN_01582534(param_1);
  uVar10 = FUN_014813e4();
  uVar9 = FUN_01481400(uVar10,param_3[1]);
  if ((uVar9 & 1) == 0) {
    return;
  }
  FUN_01582534(param_1);
  FUN_014813ec();
  uVar9 = FUN_01481540();
  if ((uVar9 & 1) == 0) {
LAB_014811a0:
    uVar10 = FUN_01246e90(param_1);
    iVar5 = FUN_01481580(uVar10,plVar8,(char)param_3[2],*param_3,
                         *(undefined2 *)((long)param_3 + 0x12),param_3[3]);
    if ((char)param_3[2] == '\b') {
      bVar3 = (**(code **)(*plVar8 + 0x290))(plVar8);
      if ((iVar5 < 1) || (bVar3 != 3)) {
        if (iVar5 < 0) goto joined_r0x01481244;
        goto LAB_01481248;
      }
    }
    else {
      bVar3 = (**(code **)(*plVar8 + 0x270))(plVar8,(char)param_3[2],iVar5);
      bVar3 = bVar3 & 1;
joined_r0x01481244:
      if (bVar3 != 0) {
LAB_01481248:
        uVar9 = (**(code **)(*plVar8 + 0x588))(plVar8);
        if (((uVar9 & 1) != 0) && (*(char *)((long)param_3 + 0x19) == '\0')) {
          iVar6 = (**(code **)(*plVar8 + 0x98))(plVar8);
          iVar2 = *param_3;
          if (iVar6 != iVar2) {
            if (cVar1 != '\0') {
              uVar10 = FUN_01243584(param_1);
              FUN_01636f5c(uVar10,iVar2,plVar8,0x48);
            }
            if (lVar12 == 0) {
              return;
            }
            uVar10 = 3;
            goto LAB_01481388;
          }
        }
        uVar10 = FUN_01246e90(param_1);
        uVar9 = FUN_014820a8(uVar10,plVar8,(char)param_3[2],*param_3,iVar5,(char)param_3[4],
                             param_3[5]);
        if ((uVar9 & 1) != 0) {
          *param_2 = 1;
          return;
        }
        if (cVar1 != '\0') {
          lVar11 = FUN_0149b698(param_1);
          *(undefined1 *)(lVar11 + 0xc0) = 1;
          uVar10 = FUN_01246e90(param_1);
          FUN_01484484(uVar10,plVar8,param_3[5]);
        }
        goto LAB_0148137c;
      }
    }
    if (cVar1 != '\0') {
      iVar2 = param_3[2];
      if ((char)iVar2 != '\b') {
        iVar6 = *param_3;
        uVar7 = (**(code **)(*plVar8 + 0x98))(plVar8);
        uVar10 = FUN_01243584(param_1);
        if (iVar5 < 1) {
          FUN_02986ce4(uVar10,iVar6,uVar7,(char)iVar2);
        }
        else {
          FUN_02986ca8();
        }
      }
      lVar11 = FUN_0149b698(param_1);
      *(undefined1 *)(lVar11 + 0xc0) = 1;
    }
    if (lVar12 == 0) {
      return;
    }
    uVar10 = 2;
  }
  else {
    FUN_01582534(param_1);
    uVar10 = FUN_014813ec();
    cVar4 = FUN_0148423c(uVar10,param_3[1]);
    if (cVar4 != '\0') goto LAB_014811a0;
    if (cVar1 != '\0') {
      iVar5 = *param_3;
      uVar10 = FUN_01243584(param_1);
      FUN_01636f5c(uVar10,iVar5,plVar8,0x48);
      lVar11 = FUN_0149b698(param_1);
      *(undefined1 *)(lVar11 + 0xc0) = 1;
    }
LAB_0148137c:
    if (lVar12 == 0) {
      return;
    }
    uVar10 = 4;
  }
LAB_01481388:
  FUN_0148155c(lVar12,uVar10);
  return;
}


