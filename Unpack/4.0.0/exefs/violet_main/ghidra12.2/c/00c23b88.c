/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c23b88; name: FUN_00c23b88
 */


undefined8 * FUN_00c23b88(long *param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  
  plVar7 = param_1 + 1;
  plVar10 = (long *)*plVar7;
  if (plVar10 != (long *)0x0) {
    plVar7 = param_1 + 1;
    do {
      if (param_2 < (int)plVar10[4]) {
        plVar4 = (long *)*plVar10;
        plVar7 = plVar10;
        if (plVar4 == (long *)0x0) {
          goto LAB_00c23c10;
        }
      }
      else {
        if (param_2 <= (int)plVar10[4]) goto LAB_00c23c10;
        plVar7 = plVar10 + 1;
        plVar4 = (long *)*plVar7;
        if (plVar4 == (long *)0x0) goto LAB_00c23c10;
      }
      plVar10 = plVar4;
    } while( true );
  }
  plVar10 = plVar7;
LAB_00c23c10:
  lVar5 = *plVar7;
  if (lVar5 == 0) {
    lVar5 = tpidr_el0;
    plVar4 = *(long **)(lVar5 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x40,8);
    *(int *)(puVar2 + 4) = param_2;
    plVar4 = puVar2 + 5;
    *plVar4 = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[2] = plVar10;
    *puVar2 = 0;
    puVar2[1] = 0;
    *plVar7 = (long)puVar2;
    if (*(long *)*param_1 == 0) {
      puVar3 = puVar2;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*plVar7;
    }
    FUN_010108e0(param_1[1],puVar3);
    param_1[2] = param_1[2] + 1;
    puVar2[7] = param_4;
    *(undefined1 *)(puVar2 + 6) = param_3;
    *(undefined1 *)((long)puVar2 + 0x33) = 0;
    *(undefined1 *)((long)puVar2 + 0x31) = 1;
    lVar9 = param_1[3];
    if (lVar9 == 0) {
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = 0;
    }
    else {
      plVar7 = (long *)FUN_00c0e238(lVar9,0,0x18);
      *plVar7 = lVar9;
      plVar7[1] = 0;
      plVar7[2] = 0;
      FUN_00c0e13c(lVar9,plVar7,&LAB_00c2cbf0);
    }
    *plVar4 = (long)plVar7;
  }
  else {
    plVar4 = (long *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x38) = param_4;
  }
  plVar4 = (long *)*plVar4;
  piVar6 = (int *)plVar4[2];
  if (piVar6 == (int *)0x0) {
    iVar1 = (int)plVar4[1];
    iVar8 = *(int *)((long)plVar4 + 0xc);
  }
  else {
    iVar1 = (int)plVar4[1];
    iVar8 = *piVar6;
    if (iVar1 < iVar8) {
      *(int *)(plVar4 + 1) = iVar1 + 1;
      return *(undefined8 **)(piVar6 + (long)iVar1 * 2 + 2);
    }
    if (iVar8 != *(int *)((long)plVar4 + 0xc)) goto LAB_00c23dac;
  }
  if (iVar1 <= iVar8) {
    FUN_00c11f04(plVar4,(iVar8 - iVar1) + 1);
    piVar6 = (int *)plVar4[2];
  }
  iVar8 = *piVar6;
LAB_00c23dac:
  *piVar6 = iVar8 + 1;
  lVar5 = *plVar4;
  if (lVar5 == 0) {
    lVar5 = tpidr_el0;
    plVar7 = *(long **)(lVar5 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00c0e238(lVar5,0,0x18);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    FUN_00c0e13c(lVar5,puVar2,PTR_LAB_047dabf0);
  }
  lVar5 = plVar4[1];
  *(int *)(plVar4 + 1) = (int)lVar5 + 1;
  *(undefined8 **)(plVar4[2] + (long)(int)lVar5 * 8 + 8) = puVar2;
  return puVar2;
}


