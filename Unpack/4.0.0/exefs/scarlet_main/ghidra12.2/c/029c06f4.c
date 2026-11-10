/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c06f4; name: FUN_029c06f4
 */


void FUN_029c06f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (lVar2 == 0) {
    uVar4 = *param_3;
    uVar3 = param_3[2];
    param_2[1] = param_3[1];
    param_2[2] = uVar3;
    *param_2 = uVar4;
  }
  else {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    uVar3 = param_3[2];
    uVar4 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar4;
    param_2[2] = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


