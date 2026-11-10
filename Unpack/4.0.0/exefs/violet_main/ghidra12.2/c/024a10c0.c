/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a10c0; name: FUN_024a10c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024a10c0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x70,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar7 = 0;
    puVar7[1] = 0;
    uVar3 = _UNK_03cabe58;
    uVar2 = _DAT_03cabe50;
    uVar1 = _DAT_03caa940;
    puVar7[3] = _UNK_03caa948;
    puVar7[2] = uVar1;
    puVar7[5] = uVar3;
    puVar7[4] = uVar2;
    uVar5 = _UNK_03cabe68;
    uVar4 = _DAT_03cabe60;
    uVar1 = DAT_03cab620;
    puVar7[7] = DAT_03cab628;
    puVar7[6] = uVar1;
    puVar7[9] = uVar5;
    puVar7[8] = uVar4;
    uVar1 = _DAT_03caa5b0;
    puVar7[0xb] = _UNK_03caa5b8;
    puVar7[10] = uVar1;
    puVar7[0xd] = uVar3;
    puVar7[0xc] = uVar2;
    *param_1 = puVar7;
    param_1[1] = param_2;
    param_1[2] = 0x70;
    param_1[3] = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


