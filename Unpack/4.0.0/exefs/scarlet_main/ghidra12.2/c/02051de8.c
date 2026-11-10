/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02051de8; name: FUN_02051de8
 */


void FUN_02051de8(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = *param_2;
  puVar3[3] = &LAB_02a93e20;
  puVar3[4] = uVar4;
  puVar3[2] = &LAB_02a93e14;
  *puVar3 = &LAB_02a93ddc;
  puVar3[1] = &LAB_02a93e10;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar3 + 0x10;
  return;
}


