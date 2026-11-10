/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0f700; name: FUN_01d0f700
 */


void FUN_01d0f700(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1e0,8);
  if (plVar4 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    puVar1 = PTR_DAT_047cfbb0 + 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *plVar4 = (long)puVar1;
    FUN_01cfa5b0(plVar4 + 1,param_3 + 8);
    FUN_01cfa5b0(plVar4 + 5,param_3 + 0x28);
    plVar4[9] = *(long *)(param_3 + 0x48);
    FUN_01d01dc4(plVar4 + 10,param_3 + 0x50);
    FUN_01d01dc4(plVar4 + 0xe,param_3 + 0x70);
    lVar6 = *(long *)(param_3 + 0x90);
    *(undefined1 *)(plVar4 + 0x13) = *(undefined1 *)(param_3 + 0x98);
    plVar4[0x12] = lVar6;
    FUN_01d01e08(plVar4 + 0x14,param_3 + 0xa0);
    FUN_01d01e70(plVar4 + 0x18,param_3 + 0xc0);
    FUN_01cfa5b0(plVar4 + 0x1c,param_3 + 0xe0);
    FUN_01cfa5b0(plVar4 + 0x20,param_3 + 0x100);
    lVar6 = *(long *)(param_3 + 0x120);
    *(undefined4 *)(plVar4 + 0x25) = *(undefined4 *)(param_3 + 0x128);
    plVar4[0x24] = lVar6;
    FUN_01cfa5b0(plVar4 + 0x26,param_3 + 0x130);
    *(undefined4 *)(plVar4 + 0x2a) = *(undefined4 *)(param_3 + 0x150);
    FUN_01d01e08(plVar4 + 0x2b,param_3 + 0x158);
    lVar6 = *(long *)(param_3 + 0x178);
    lVar2 = *(long *)(param_3 + 0x180);
    *(undefined1 *)(plVar4 + 0x31) = *(undefined1 *)(param_3 + 0x188);
    plVar4[0x2f] = lVar6;
    plVar4[0x30] = lVar2;
    FUN_01d01ed8(plVar4 + 0x32,param_3 + 400);
    memcpy(plVar4 + 0x33,(void *)(param_3 + 0x198),0x28);
    FUN_01cfa5b0(plVar4 + 0x38,param_3 + 0x1c0);
    *param_1 = plVar4;
    param_1[1] = param_2;
    param_1[2] = 0x1e0;
    param_1[3] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


