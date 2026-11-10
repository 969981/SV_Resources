/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4fdf0; name: FUN_01d4fdf0
 */


void FUN_01d4fdf0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
  if (puVar5 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    uVar1 = param_3[3];
    uVar2 = param_3[4];
    uVar3 = param_3[6];
    puVar5[5] = param_3[5];
    puVar5[6] = uVar3;
    puVar5[3] = uVar1;
    puVar5[4] = uVar2;
    *puVar5 = *param_3;
    puVar5[1] = param_3[1];
    puVar5[2] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    uVar1 = param_3[10];
    uVar2 = param_3[0xb];
    uVar3 = param_3[0xd];
    puVar5[0xc] = param_3[0xc];
    puVar5[0xd] = uVar3;
    puVar5[10] = uVar1;
    puVar5[0xb] = uVar2;
    puVar5[7] = param_3[7];
    puVar5[8] = param_3[8];
    puVar5[9] = param_3[9];
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[7] = 0;
    *param_1 = puVar5;
    param_1[1] = param_2;
    param_1[2] = 0x70;
    param_1[3] = 8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


