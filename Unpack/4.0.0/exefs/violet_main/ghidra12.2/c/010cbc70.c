/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010cbc70; name: FUN_010cbc70
 */


void FUN_010cbc70(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xf0,8);
  if (puVar2 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
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
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar5 = *param_3;
    *puVar2 = *param_4;
    puVar2[1] = param_4[1];
    puVar2[2] = param_4[2];
    plVar4 = (long *)param_4[3];
    puVar2[3] = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    puVar2[6] = uVar5;
    puVar2[7] = 0x555555555555555;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    puVar2[0xf] = 0;
    puVar2[0x15] = 0;
    *(undefined4 *)(puVar2 + 0x16) = 0;
    *(undefined4 *)(puVar2 + 0x1b) = 0;
    puVar2[0x1c] = 0;
    puVar2[0xc] = 0x555555555555555;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x1d) = 0x3f800000;
    puVar2[0x13] = uVar5;
    puVar2[0x14] = 0x3ffffffffffffff;
    puVar2[0x19] = 0x3ffffffffffffff;
    puVar2[0x1a] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = uVar5;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = uVar5;
    *param_1 = (long)puVar2;
    param_1[1] = (long)param_2;
    param_1[2] = 0xf0;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


