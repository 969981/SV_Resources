/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaae24; name: FUN_01eaae24
 */


void FUN_01eaae24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 local_18;
  
  lVar3 = *(long *)(param_1 + 0x108);
  if (lVar3 != *(long *)(param_1 + 0x110)) {
    local_18 = param_2;
    do {
      uVar1 = FUN_01ea2ee8(lVar3,&local_18);
      if ((uVar1 & 1) == 0) {
        lVar3 = lVar3 + 0x40;
      }
      else {
        FUN_01ea3384(lVar3 + 8);
        if ((*(long *)(lVar3 + 8) != 0) &&
           (lVar4 = *(long *)(*(long *)(lVar3 + 8) + 0x10), lVar4 != 0)) {
          plVar2 = (long *)(lVar4 + -0x28);
          (**(code **)(*plVar2 + 0x120))(plVar2,1);
        }
        lVar3 = FUN_015bb494(param_1 + 0x108,lVar3);
      }
    } while (lVar3 != *(long *)(param_1 + 0x110));
  }
  return;
}


