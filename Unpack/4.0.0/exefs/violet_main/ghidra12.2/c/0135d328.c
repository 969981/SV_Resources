/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0135d328; name: FUN_0135d328
 */


void FUN_0135d328(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar2 + 0x30) = DAT_04859430;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  *param_1 = *(undefined8 *)(lVar2 + 0x30);
  param_1[1] = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = param_2;
  *(undefined1 *)(lVar2 + 0x38) = 1;
  *(byte *)(lVar2 + 0x39) = param_3 & 1;
  return;
}


