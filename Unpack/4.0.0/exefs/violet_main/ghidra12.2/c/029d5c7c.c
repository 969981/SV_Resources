/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d5c7c; name: FUN_029d5c7c
 */


void FUN_029d5c7c(undefined8 *param_1,long param_2,long param_3,long *param_4)

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
        *(undefined2 *)(lVar3 + -2) = *(undefined2 *)(param_3 + -2);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *(undefined2 *)(lVar3 + -2) = *(undefined2 *)(param_3 + -2);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      param_3 = param_3 + -2;
      lVar3 = *param_4 + -2;
      *param_4 = lVar3;
    } while (param_2 != param_3);
  }
  return;
}


