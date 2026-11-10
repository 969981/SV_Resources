/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02988400; name: FUN_02988400
 */


undefined8 FUN_02988400(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0298d980(param_2);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_014df9d4(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    if (lVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_0298da60();
    if ((uVar1 & 1) != 0) {
      FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x4b,param_2 & 0xff,param_3);
      return 1;
    }
  }
  return 0;
}


