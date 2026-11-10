/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010106e4; name: FUN_010106e4
 */


undefined8 FUN_010106e4(long *param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar8 = param_1 + 1;
  if ((long *)*plVar8 == (long *)0x0) {
    plVar9 = plVar8;
LAB_01010744:
    if (*plVar8 == 0) {
      puVar2 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x38,8);
      if (puVar2 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[2] + 0xe8))();
      }
      lVar10 = param_1[2];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        uVar5 = *param_2;
        puVar2[5] = 0;
        puVar2[4] = uVar5;
        puVar2[6] = 0;
        FUN_00d0a71c(puVar2 + 5,param_3);
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar5 = *param_2;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[4] = uVar5;
        FUN_00d0a71c(puVar2 + 5,param_3);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = plVar9;
      *plVar8 = (long)puVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar2 = (undefined8 *)*plVar8;
      }
      FUN_010108e0(param_1[1],puVar2);
      uVar4 = 1;
      param_1[6] = param_1[6] + 1;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  plVar7 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  do {
    if (*param_2 < (ulong)plVar9[4]) {
      plVar6 = (long *)*plVar9;
      if (plVar6 == (long *)0x0) {
        plVar8 = plVar9;
        goto LAB_01010744;
      }
      plVar7 = plVar9;
    }
    else {
      plVar8 = plVar7;
      if (*param_2 <= (ulong)plVar9[4]) goto LAB_01010744;
      plVar8 = plVar9 + 1;
      plVar6 = (long *)*plVar8;
      plVar7 = plVar8;
      if (plVar6 == (long *)0x0) goto LAB_01010744;
    }
    plVar9 = plVar6;
  } while( true );
}


