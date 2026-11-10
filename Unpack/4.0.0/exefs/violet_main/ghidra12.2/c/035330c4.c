/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035330c4; name: FUN_035330c4
 */


void FUN_035330c4(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long local_80;
  undefined1 local_78;
  long local_70;
  uint local_68;
  
  plVar10 = (long *)(param_1 + 0x70);
  plVar7 = (long *)*plVar10;
  if ((plVar7 == (long *)0x0) || (param_3 + param_2 < (int)plVar7[2])) {
    return;
  }
  if (plVar7[1] == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *plVar10 = 0;
  }
  else {
    *plVar10 = plVar7[1];
  }
  puVar2 = PTR_DAT_047e2fd0;
  puVar1 = PTR_DAT_047e7568 + 0x10;
  do {
    lVar6 = plVar7[2];
    iVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (iVar4 == 1) {
      plVar8 = (long *)plVar7[3];
      local_68 = local_68 & 0xffffff00;
      iVar4 = (int)lVar6 - param_2;
      plVar9 = &local_70;
      local_70 = plVar7[4];
LAB_03533360:
      FUN_0351cba8(plVar8,plVar9,iVar4);
    }
    else if (iVar4 == 0) {
      plVar9 = (long *)plVar7[3];
      iVar4 = (int)plVar7[4];
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 != (long *)0x0) {
        plVar5 = plVar8;
        do {
          if (((((long *)plVar5[0x10] == plVar9) && ((int)plVar5[0x11] == iVar4)) &&
              ((*(byte *)((long)plVar5 + 0x5a) & 0xe) == 0)) &&
             (((long *)plVar5[7] == (long *)0x0 ||
              ((lVar6 = *(long *)plVar5[7], lVar6 != 0x4000000 && (lVar6 != 0x2000000))))))
          goto LAB_03533364;
          plVar5 = (long *)plVar5[1];
        } while (plVar5 != (long *)0x0);
        do {
          if ((((long *)plVar8[0x10] == plVar9) && ((int)plVar8[0x11] == iVar4)) &&
             ((*(byte *)((long)plVar8 + 0x5a) & 0xe) == 0)) goto LAB_03533304;
          plVar8 = (long *)plVar8[1];
        } while (plVar8 != (long *)0x0);
      }
      plVar8 = (long *)(**(code **)(puVar2 + 0x10))(0,0xb0);
      if (plVar8 != (long *)0x0) {
        *(undefined4 *)(plVar8 + 4) = 0;
        plVar8[7] = 0;
        plVar8[8] = 0;
        *(undefined2 *)(plVar8 + 0xb) = 0;
        plVar8[9] = 0;
        plVar8[10] = -0xc0800000;
        *(byte *)((long)plVar8 + 0x5a) = *(byte *)((long)plVar8 + 0x5a) & 0xe0;
        puVar3 = PTR_DAT_047e7570;
        plVar8[0x10] = (long)plVar9;
        *(int *)(plVar8 + 0x11) = iVar4;
        *plVar8 = (long)(puVar3 + 0x10);
        plVar8[0x12] = 0;
        plVar8[2] = param_1;
        plVar8[3] = (long)(puVar3 + 0xa0);
        plVar8[5] = (long)(puVar3 + 200);
        plVar8[6] = 0;
        plVar8[0xc] = (long)puVar1;
        plVar8[0xd] = 0;
        plVar8[0xe] = 0;
        plVar8[0xf] = 0;
        *(undefined4 *)(plVar8 + 0x13) = 0xffffffff;
        *(undefined4 *)(plVar8 + 0x15) = 0;
        *(byte *)((long)plVar8 + 0xac) = *(byte *)((long)plVar8 + 0xac) & 0xfc;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
        *(int *)(plVar8 + 9) = (int)plVar8[9] + 1;
        lVar6 = plVar8[2];
        if (lVar6 != 0) {
          if (*(long *)(lVar6 + 0x30) == 0) {
            *(long **)(lVar6 + 0x30) = plVar8;
            plVar8[1] = 0;
          }
          else {
            plVar8[1] = *(long *)(lVar6 + 0x30);
            *(long **)(lVar6 + 0x30) = plVar8;
          }
          *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
        }
LAB_03533304:
        *(int *)(plVar8 + 0x15) =
             *(int *)(*(long *)(*(long *)(param_1 + 0x78) + 0x130) + 4) + (int)plVar7[6];
        local_70 = *(long *)((long)plVar7 + 0x24);
        local_68 = (int)plVar7[6] - (int)plVar7[2];
        FUN_0351ca80(plVar8,&local_70);
        if ((*(byte *)(param_1 + 0x5a) >> 1 & 1) != 0) {
          local_80 = 0x400000000;
          local_78 = 0;
          iVar4 = *(int *)(param_1 + 0x54);
          plVar9 = &local_80;
          goto LAB_03533360;
        }
      }
    }
LAB_03533364:
    (**(code **)*plVar7)(plVar7);
    (**(code **)(puVar2 + 0x30))(0,plVar7);
    plVar7 = (long *)*plVar10;
    if (plVar7 == (long *)0x0) {
      return;
    }
    if (param_3 + param_2 < (int)plVar7[2]) {
      return;
    }
    if (plVar7[1] == 0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *plVar10 = 0;
    }
    else {
      *plVar10 = plVar7[1];
    }
  } while( true );
}


