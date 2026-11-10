/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0249fe20; name: FUN_0249fe20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0249fe20(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x80,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0x3f0000003f000000;
    puVar8[3] = 0;
    uVar4 = _UNK_03cabe58;
    uVar3 = _DAT_03cabe50;
    *(undefined4 *)(puVar8 + 3) = 0x3f800000;
    uVar6 = _UNK_03cabe68;
    uVar5 = _DAT_03cabe60;
    uVar2 = DAT_03cab628;
    uVar1 = DAT_03cab620;
    *(undefined4 *)(puVar8 + 6) = 10;
    puVar8[5] = uVar4;
    puVar8[4] = uVar3;
    puVar8[9] = uVar2;
    puVar8[8] = uVar1;
    puVar8[0xb] = uVar6;
    puVar8[10] = uVar5;
    uVar1 = _DAT_03caa5b0;
    puVar8[0xd] = _UNK_03caa5b8;
    puVar8[0xc] = uVar1;
    puVar8[0xf] = uVar4;
    puVar8[0xe] = uVar3;
    *param_1 = puVar8;
    param_1[1] = param_2;
    param_1[2] = 0x80;
    param_1[3] = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  return;
}


