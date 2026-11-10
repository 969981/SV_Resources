/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf4a80; name: FUN_01cf4a80
 */


void FUN_01cf4a80(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x10,8);
  if (puVar2 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_01053840();
    lVar4 = nn::os::GetTlsValue(*puVar3);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar1 = param_3[1];
    *puVar2 = *param_3;
    puVar2[1] = uVar1;
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x10;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


