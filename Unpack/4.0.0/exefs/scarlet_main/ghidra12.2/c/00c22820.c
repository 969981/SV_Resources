/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c22820; name: FUN_00c22820
 */


void FUN_00c22820(long *param_1,int param_2,undefined1 param_3,byte param_4,byte param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  plVar9 = param_1 + 1;
  plVar14 = (long *)*plVar9;
  if (plVar14 == (long *)0x0) {
    plVar14 = plVar9;
LAB_00c228b0:
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      lVar7 = tpidr_el0;
      plVar6 = *(long **)(lVar7 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,8);
      *(int *)(puVar4 + 4) = param_2;
      puVar13 = puVar4 + 5;
      *puVar13 = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[2] = plVar14;
      *puVar4 = 0;
      puVar4[1] = 0;
      *plVar9 = (long)puVar4;
      if (*(long *)*param_1 == 0) {
        puVar5 = puVar4;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar5 = (undefined8 *)*plVar9;
      }
      FUN_010108e0(param_1[1],puVar5);
      param_1[2] = param_1[2] + 1;
      puVar4[7] = param_6;
      *(undefined1 *)(puVar4 + 6) = param_3;
      *(undefined1 *)((long)puVar4 + 0x31) = 1;
      *(byte *)((long)puVar4 + 0x33) = param_4 & 1;
      lVar10 = param_1[3];
      if (lVar10 == 0) {
        plVar9 = *(long **)(lVar7 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar7 + 0x30) = DAT_04859430;
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      else {
        puVar4 = (undefined8 *)FUN_00c0e238(lVar10,0,0x10);
        *puVar4 = 0;
        puVar4[1] = 0;
        plVar9 = (long *)FUN_00c0e238(lVar10,0,8);
        puVar4[1] = plVar9;
        *plVar9 = lVar10;
        FUN_00c0e13c(lVar10,puVar4,&LAB_00c2cbd0);
      }
      *puVar13 = puVar4;
    }
    else {
      puVar13 = (undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x38) = param_6;
    }
    puVar12 = (uint *)*puVar13;
    uVar2 = *puVar12;
    if (uVar2 == puVar12[1]) {
      plVar9 = *(long **)(puVar12 + 2);
      if (plVar9 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar9;
      }
      uVar8 = uVar2 * 2;
      if ((int)(uVar2 * 2) <= (int)uVar2) {
        uVar8 = uVar2 + 1;
      }
      if ((int)uVar8 < 5) {
        uVar8 = 4;
      }
      uVar11 = (ulong)(uVar8 + 8);
      if (lVar7 == 0) {
        plVar14 = operator_new__(uVar11);
      }
      else {
        plVar14 = (long *)FUN_00c0e238(lVar7,0,uVar11);
      }
      *(long **)(puVar12 + 2) = plVar14;
      *plVar14 = lVar7;
      lVar7 = *(long *)(puVar12 + 2);
      uVar1 = lVar7 + uVar11;
      if (lVar7 + uVar11 <= lVar7 + 9U) {
        uVar1 = lVar7 + 9U;
      }
      puVar12[1] = uVar8;
      memset((void *)(lVar7 + 8),0,(uVar1 - lVar7) - 8);
      if (0 < (int)*puVar12) {
        memcpy((void *)(*(long *)(puVar12 + 2) + 8),plVar9 + 1,(ulong)*puVar12);
      }
      if ((plVar9 != (long *)0x0) && (*plVar9 == 0)) {
        operator_delete__(plVar9);
      }
    }
    uVar2 = *puVar12;
    *puVar12 = uVar2 + 1;
    *(byte *)(*(long *)(puVar12 + 2) + (long)(int)uVar2 + 8) = param_5 & 1;
    return;
  }
  plVar9 = param_1 + 1;
  do {
    if (param_2 < (int)plVar14[4]) {
      plVar6 = (long *)*plVar14;
      plVar9 = plVar14;
      if (plVar6 == (long *)0x0) {
        goto LAB_00c228b0;
      }
    }
    else {
      if (param_2 <= (int)plVar14[4]) goto LAB_00c228b0;
      plVar9 = plVar14 + 1;
      plVar6 = (long *)*plVar9;
      if (plVar6 == (long *)0x0) goto LAB_00c228b0;
    }
    plVar14 = plVar6;
  } while( true );
}


