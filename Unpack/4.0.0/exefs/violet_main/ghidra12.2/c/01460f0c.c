/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01460f0c; name: FUN_01460f0c
 */


void FUN_01460f0c(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  lVar5 = *(long *)(param_1 + 0x18);
  uVar1 = (**(code **)(*plVar2 + 0x98))();
  uVar4 = *(undefined8 *)(*(long *)(lVar5 + 8) + 0xd0);
  lVar3 = FUN_0129b478(uVar4,0,uVar1);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x44) != '\0') {
      if (*(char *)(lVar3 + 0x3f) == '\0') {
        FUN_014608e0(*(undefined8 *)(*(long *)(lVar5 + 8) + 0xd0));
      }
      else {
        FUN_01460cdc(lVar3,1);
      }
    }
    lVar3 = FUN_0129b478(uVar4,0,uVar1);
    if (lVar3 != 0) {
      do {
        if (*(char *)(lVar3 + 0x44) != '\0') {
          if (*(char *)(lVar3 + 0x3f) == '\0') {
            FUN_014608e0(*(undefined8 *)(*(long *)(lVar5 + 8) + 0xd0));
          }
          else {
            FUN_01460cdc(lVar3,1);
          }
        }
        lVar3 = FUN_0129b478(uVar4,0,uVar1);
      } while (lVar3 != 0);
    }
  }
  return;
}


