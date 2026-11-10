/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01304890; name: FUN_01304890
 */


void FUN_01304890(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x1e8,8);
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
    uVar4 = *param_4;
    uVar5 = *param_3;
    *param_4 = 0;
    *(undefined4 *)((long)puVar2 + 0x1c) = 1;
    *puVar2 = uVar4;
    puVar2[1] = 0;
    nn::os::InitializeLightEvent(puVar2 + 2,0,1);
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    puVar2[6] = 0;
    puVar2[7] = uVar5;
    *(undefined4 *)(puVar2 + 0x11) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined4 *)((long)puVar2 + 0xe4) = 1;
    puVar2[8] = 0x666666666666666;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar5;
    puVar2[0xf] = 0xffffffffffffffff;
    puVar2[0x10] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = uVar5;
    puVar2[0x16] = 0x1fffffffffffffff;
    puVar2[0x17] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    nn::os::InitializeLightEvent(puVar2 + 0x1b,0,1);
    *(undefined4 *)(puVar2 + 0x23) = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    *(undefined4 *)(puVar2 + 0x2a) = 0;
    *(undefined4 *)(puVar2 + 0x31) = 0;
    *(undefined4 *)((long)puVar2 + 0x1ac) = 1;
    puVar2[0x1f] = 0;
    puVar2[0x20] = uVar5;
    puVar2[0x21] = 0x666666666666666;
    puVar2[0x22] = 0;
    puVar2[0x24] = 0;
    puVar2[0x25] = 0;
    puVar2[0x26] = 0;
    puVar2[0x27] = uVar5;
    puVar2[0x28] = 0xffffffffffffffff;
    puVar2[0x29] = 0;
    puVar2[0x2b] = 0;
    puVar2[0x2c] = 0;
    puVar2[0x2d] = 0;
    puVar2[0x2e] = uVar5;
    puVar2[0x2f] = 0x1fffffffffffffff;
    puVar2[0x30] = 0;
    puVar2[0x32] = 0;
    puVar2[0x33] = 0;
    nn::os::InitializeLightEvent(puVar2 + 0x34,0,1);
    puVar2[0x3b] = 0;
    puVar2[0x3c] = 0;
    puVar2[0x36] = 0;
    puVar2[0x39] = 0;
    puVar2[0x3a] = 0;
    puVar2[0x37] = 0;
    puVar2[0x38] = 0;
    FUN_0103b6e0(puVar2 + 0x36);
    *param_1 = (long)puVar2;
    param_1[1] = (long)param_2;
    param_1[2] = 0x1e8;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


