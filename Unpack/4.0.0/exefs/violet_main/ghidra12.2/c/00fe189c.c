/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe189c; name: FUN_00fe189c
 */


void FUN_00fe189c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_1 + 0x1e0) == 0) {
    plVar6 = *(long **)(param_1 + 8);
    puVar2 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x78,8);
    if (puVar2 == (undefined8 *)0x0) {
      plVar6 = (long *)0x0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined4 *)(puVar2 + 4) = 1;
      *(undefined8 *)((long)puVar2 + 0x24) = 0;
      *(undefined8 *)((long)puVar2 + 0x2c) = 0;
      uVar7 = 8;
      uVar8 = 0x78;
      puVar2[0xb] = 0;
      puVar2[0xd] = 0;
      *(undefined4 *)(puVar2 + 0xe) = 0;
      puVar2[3] = 0x100000001;
      *(undefined8 *)((long)puVar2 + 0x31) = 0;
      puVar2[9] = 0x100000001;
      puVar2[10] = 1;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    lVar3 = *(long *)(param_1 + 0x1e0);
    *(undefined8 **)(param_1 + 0x1e0) = puVar2;
    if (lVar3 != 0) {
      FUN_00eeae00(param_1 + 0x1e8);
    }
    *(long **)(param_1 + 0x1e8) = plVar6;
    *(undefined8 *)(param_1 + 0x1f0) = uVar8;
    *(undefined8 *)(param_1 + 0x1f8) = uVar7;
    FUN_00fe1a6c(param_2);
  }
  else {
    uVar4 = FUN_00fe1a6c(param_2);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  lVar3 = *(long *)(param_1 + 0x208);
  lVar5 = *(long *)(param_1 + 0x210);
  if (((lVar3 != lVar5) && (*(undefined1 *)(lVar3 + 0x10) = 1, lVar3 + 0x18 != lVar5)) &&
     (*(undefined1 *)(lVar3 + 0x28) = 1, lVar3 + 0x30 != lVar5)) {
    *(undefined1 *)(lVar3 + 0x40) = 1;
    for (lVar3 = lVar3 + 0x48; lVar3 != lVar5; lVar3 = lVar3 + 0x18) {
      *(undefined1 *)(lVar3 + 0x10) = 1;
    }
  }
  return;
}


