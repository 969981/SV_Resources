/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278cdd0; name: FUN_0278cdd0
 */


void FUN_0278cdd0(undefined8 *param_1,long *param_2)

{
  Context *this;
  undefined4 *puVar1;
  long lVar2;
  
  this = (Context *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  if (this == (Context *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_01053840();
    lVar2 = nn::os::GetTlsValue(*puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    nn::ssl::Context::Context(this);
    *param_1 = this;
    param_1[1] = param_2;
    param_1[2] = 8;
    param_1[3] = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


