/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01977660; name: FUN_01977660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01977660(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x30,0x10);
  if (puVar4 == (undefined8 *)0x0) {
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
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    uVar2 = _UNK_03cabe58;
    uVar1 = _DAT_03cabe50;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[3] = uVar2;
    puVar4[2] = uVar1;
    *param_1 = puVar4;
    param_1[1] = param_2;
    param_1[2] = 0x30;
    param_1[3] = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


