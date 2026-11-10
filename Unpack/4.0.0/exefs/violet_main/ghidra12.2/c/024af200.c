/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024af200; name: FUN_024af200
 */


void FUN_024af200(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_2 + 0xf8);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(param_2 + 0x100,param_2 + 0x100,2);
    }
    *(undefined8 *)(param_2 + 0xf8) = 0;
  }
  lVar3 = *(long *)(param_2 + 0xf0);
  if (lVar3 != 0) {
    lVar2 = param_2;
    do {
      lVar3 = lVar3 + -1;
      FUN_024ab29c(lVar2,auStack_38);
      lVar2 = lVar2 + 0x18;
    } while (lVar3 != 0);
  }
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,0x118,0x10);
  return;
}


