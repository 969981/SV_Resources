/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c241b0; name: FUN_00c241b0
 */


void FUN_00c241b0(long *param_1,int param_2,undefined1 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  
  if (param_5 == (long *)0x0) {
    param_1 = param_1 + 1;
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar9 = param_1;
    do {
      if (param_2 <= (int)plVar4[4]) {
        plVar9 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if (plVar9 == param_1) {
      return;
    }
    if (param_2 < (int)plVar9[4]) {
      return;
    }
    FUN_00c1ffb4(plVar9 + 5);
    return;
  }
  lVar2 = (**(code **)(*param_5 + 0x28))(param_5);
  plVar4 = param_1 + 1;
  plVar9 = (long *)*plVar4;
  if (plVar9 != (long *)0x0) {
    plVar4 = param_1 + 1;
    do {
      if (param_2 < (int)plVar9[4]) {
        plVar6 = (long *)*plVar9;
        plVar4 = plVar9;
        if (plVar6 == (long *)0x0) {
          goto LAB_00c242b0;
        }
      }
      else {
        if (param_2 <= (int)plVar9[4]) goto LAB_00c242b0;
        plVar4 = plVar9 + 1;
        plVar6 = (long *)*plVar4;
        if (plVar6 == (long *)0x0) goto LAB_00c242b0;
      }
      plVar9 = plVar6;
    } while( true );
  }
  plVar9 = plVar4;
LAB_00c242b0:
  lVar7 = *plVar4;
  if (lVar7 == 0) {
    lVar7 = tpidr_el0;
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,8);
    *(int *)(puVar3 + 4) = param_2;
    plVar6 = puVar3 + 5;
    *plVar6 = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[2] = plVar9;
    *puVar3 = 0;
    puVar3[1] = 0;
    *plVar4 = (long)puVar3;
    if (*(long *)*param_1 == 0) {
      puVar5 = puVar3;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar5 = (undefined8 *)*plVar4;
    }
    FUN_010108e0(param_1[1],puVar5);
    param_1[2] = param_1[2] + 1;
    puVar3[7] = param_4;
    *(undefined1 *)(puVar3 + 6) = param_3;
    *(undefined1 *)((long)puVar3 + 0x31) = 0;
    *(byte *)((long)puVar3 + 0x32) = *(byte *)((long)puVar3 + 0x32) & 0xf;
    lVar7 = param_1[3];
    if (lVar2 == lVar7) {
LAB_00c243fc:
      *plVar6 = (long)param_5;
      goto LAB_00c24414;
    }
    if (lVar2 == 0) {
      *plVar6 = (long)param_5;
LAB_00c2440c:
      FUN_00c10f54(lVar7,param_5);
      goto LAB_00c24414;
    }
LAB_00c243d4:
    plVar4 = (long *)(**(code **)(*param_5 + 0x20))(param_5);
    *plVar6 = (long)plVar4;
    pcVar8 = *(code **)(*plVar4 + 0x50);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x38) = param_4;
    if ((*(byte *)(lVar7 + 0x32) >> 4 & 1) == 0) {
      lVar7 = param_1[3];
      if (lVar7 == 0) {
        if ((long *)*plVar6 == (long *)0x0) {
          lVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 8))();
          lVar7 = param_1[3];
        }
      }
      if (lVar2 == lVar7) goto LAB_00c243fc;
      if (lVar2 == 0) {
        *plVar6 = (long)param_5;
        lVar7 = param_1[3];
        goto LAB_00c2440c;
      }
      goto LAB_00c243d4;
    }
    plVar4 = (long *)*plVar6;
    pcVar8 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar8)(plVar4,param_5);
LAB_00c24414:
  *(byte *)((long)plVar6 + 10) = *(byte *)((long)plVar6 + 10) & 0xf0;
  return;
}


