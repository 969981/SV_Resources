/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0120b810; name: FUN_0120b810
 */


void FUN_0120b810(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
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
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    uVar4 = param_3[3];
    param_3[3] = 0;
    puVar2[3] = uVar4;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_3 + 4);
    puVar2[5] = param_3[5];
    puVar2[6] = param_3[6];
    puVar2[7] = param_3[7];
    uVar4 = param_3[8];
    param_3[8] = 0;
    puVar2[8] = uVar4;
    uVar4 = param_3[9];
    *(undefined1 *)(puVar2 + 10) = *(undefined1 *)(param_3 + 10);
    puVar2[9] = uVar4;
    uVar4 = param_3[0xb];
    param_3[0xb] = 0;
    puVar2[0xb] = uVar4;
    uVar4 = param_3[0xc];
    param_3[0xc] = 0;
    puVar2[0xc] = uVar4;
    *param_1 = (long)puVar2;
    param_1[1] = (long)param_2;
    param_1[2] = 0x68;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


