/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a99c0; name: FUN_024a99c0
 */


void FUN_024a99c0(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
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
    *puVar1 = *param_3;
    *param_1 = (long)puVar1;
    param_1[1] = (long)param_2;
    param_1[2] = 8;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


