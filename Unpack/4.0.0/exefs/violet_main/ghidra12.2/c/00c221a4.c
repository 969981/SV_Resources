/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c221a4; name: FUN_00c221a4
 */


void FUN_00c221a4(undefined8 param_1,long *param_2,int param_3,undefined1 param_4,byte param_5,
                 undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  plVar3 = param_2 + 1;
  plVar10 = (long *)*plVar3;
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar3;
LAB_00c22238:
    lVar6 = *plVar3;
    if (lVar6 == 0) {
      lVar6 = tpidr_el0;
      plVar5 = *(long **)(lVar6 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8);
      *(int *)(puVar2 + 4) = param_3;
      puVar9 = puVar2 + 5;
      *puVar9 = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[2] = plVar10;
      *puVar2 = 0;
      puVar2[1] = 0;
      *plVar3 = (long)puVar2;
      if (*(long *)*param_2 == 0) {
        puVar4 = puVar2;
      }
      else {
        *param_2 = *(long *)*param_2;
        puVar4 = (undefined8 *)*plVar3;
      }
      FUN_010108e0(param_2[1],puVar4);
      param_2[2] = param_2[2] + 1;
      puVar2[7] = param_6;
      *(undefined1 *)(puVar2 + 6) = param_4;
      *(undefined1 *)((long)puVar2 + 0x31) = 1;
      *(byte *)((long)puVar2 + 0x33) = param_5 & 1;
      lVar8 = param_2[3];
      if (lVar8 == 0) {
        plVar3 = *(long **)(lVar6 + 0x30);
        if (plVar3 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar3 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x10,8);
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        puVar2 = (undefined8 *)FUN_00c0e238(lVar8,0,0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        plVar3 = (long *)FUN_00c0e238(lVar8,0,8);
        puVar2[1] = plVar3;
        *plVar3 = lVar8;
        FUN_00c0e13c(lVar8,puVar2,&LAB_00c2cbb0);
      }
      *puVar9 = puVar2;
    }
    else {
      puVar9 = (undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x38) = param_6;
    }
    piVar7 = (int *)*puVar9;
    iVar1 = *piVar7;
    if (iVar1 == piVar7[1]) {
      FUN_00bf4b4c(piVar7,iVar1 + 1);
      iVar1 = *piVar7;
    }
    *piVar7 = iVar1 + 1;
    *(undefined8 *)(*(long *)(piVar7 + 2) + (long)iVar1 * 8 + 8) = param_1;
    return;
  }
  plVar3 = param_2 + 1;
  do {
    if (param_3 < (int)plVar10[4]) {
      plVar5 = (long *)*plVar10;
      plVar3 = plVar10;
      if (plVar5 == (long *)0x0) {
        goto LAB_00c22238;
      }
    }
    else {
      if (param_3 <= (int)plVar10[4]) goto LAB_00c22238;
      plVar3 = plVar10 + 1;
      plVar5 = (long *)*plVar3;
      if (plVar5 == (long *)0x0) goto LAB_00c22238;
    }
    plVar10 = plVar5;
  } while( true );
}


