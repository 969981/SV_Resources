/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043f1c0; name: FUN_0043f1c0
 */


undefined8 FUN_0043f1c0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) || (*(long *)(lVar2 + 0x48) == 0)
     ) {
    FUN_004806c0(6,0x8d,0x96,"external/openssl/crypto/evp/pmeth_fn.c",0x28);
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if (*(code **)(lVar2 + 0x40) == (code *)0x0) {
    return 1;
  }
  uVar1 = (**(code **)(lVar2 + 0x40))(param_1);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 4) = 0;
    return uVar1;
  }
  return uVar1;
}


