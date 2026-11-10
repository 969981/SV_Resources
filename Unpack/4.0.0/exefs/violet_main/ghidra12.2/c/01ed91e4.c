/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed91e4; name: FUN_01ed91e4
 */


void FUN_01ed91e4(undefined8 *param_1,void *param_2,void *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (lVar2 == 0) {
    memcpy(param_2,param_3,0x2c8);
    return;
  }
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  memcpy(param_2,param_3,0x2c8);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return;
}


