/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024b3650; name: FUN_024b3650
 */


void FUN_024b3650(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  if (puVar1 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_01053840();
    lVar3 = nn::os::GetTlsValue(*puVar2);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar4 = *param_3;
    *param_3 = 0;
    *puVar1 = uVar4;
    *param_1 = (long)puVar1;
    param_1[1] = (long)param_2;
    param_1[2] = 8;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


