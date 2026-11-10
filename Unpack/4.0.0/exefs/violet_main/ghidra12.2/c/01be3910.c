/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be3910; name: FUN_01be3910
 */


void FUN_01be3910(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,0x90,0x10);
  if (puVar3 == (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    puVar1 = PTR_DAT_047d5400;
    *puVar3 = 0;
    *(undefined **)(puVar3 + 4) = puVar1 + 0x10;
    puVar1 = PTR_DAT_047d53f0 + 0x10;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 10) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined **)(puVar3 + 0xc) = puVar1;
    *(undefined8 *)(puVar3 + 0xe) = 0;
    *(undefined8 *)(puVar3 + 0x16) = 0;
    *(undefined8 *)(puVar3 + 0x14) = 0;
    puVar1 = PTR_DAT_047d53f8;
    *(undefined8 *)(puVar3 + 0x1c) = 0;
    *(undefined8 *)(puVar3 + 0x1e) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x22) = 0;
    *(undefined **)(puVar3 + 0x18) = puVar1 + 0x10;
    *(undefined8 *)(puVar3 + 0x1a) = 0;
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 0x90;
    param_1[3] = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


