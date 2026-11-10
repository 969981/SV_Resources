/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019aaba8; name: FUN_019aaba8
 */


void FUN_019aaba8(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_1 + 8)) {
    FUN_01b34274();
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (lVar2 == 0) {
    *puVar3 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar3 = *param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar3 + 1;
  return;
}


