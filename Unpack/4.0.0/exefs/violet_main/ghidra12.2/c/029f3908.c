/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f3908; name: FUN_029f3908
 */


void FUN_029f3908(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    do {
      uVar4 = *param_1;
      puVar1 = (undefined4 *)FUN_01053840();
      lVar2 = nn::os::GetTlsValue(*puVar1);
      if (lVar2 == 0) {
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(param_3 + -8);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(param_3 + -8);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      param_3 = param_3 + -8;
      lVar3 = *param_4 + -8;
      *param_4 = lVar3;
    } while (param_2 != param_3);
  }
  return;
}


