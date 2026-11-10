/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01129de8; name: FUN_01129de8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01129de8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (*(char *)(lVar2 + 0xd5) != '\0') {
    if (((*(char *)(lVar2 + 0xf8) == '\0') &&
        (iVar1 = FUN_0112a0a0(*(undefined8 *)(lVar2 + 0x90)), iVar1 == 0)) &&
       (iVar1 = FUN_01129f70(*(undefined8 *)(lVar2 + 0x90),1000), iVar1 != 0)) {
      FUN_0112a220(*(undefined8 *)(lVar2 + 0x90));
      iVar1 = FUN_01129f10(*(undefined8 *)(lVar2 + 0x90));
      if (iVar1 != 0) {
        FUN_0112a3d0(*(undefined8 *)(lVar2 + 0x90),*(undefined8 *)(lVar2 + 0x98),
                     *(undefined4 *)(lVar2 + 0xd0));
        FUN_01129f70(*(undefined8 *)(lVar2 + 0x90),0xffffffff);
        FUN_0112a220(*(undefined8 *)(lVar2 + 0x90));
      }
      FUN_0112a3d0(*(undefined8 *)(lVar2 + 0x90),*(undefined8 *)(lVar2 + 0x98),
                   *(undefined4 *)(lVar2 + 0xd0));
      (**(code **)(**(long **)(lVar2 + 0x88) + 0x88))();
      if ((*(int *)(*(long *)(lVar2 + 0x90) + 0xc) == *(int *)(*(long *)(lVar2 + 0x90) + 8)) &&
         (*(char *)(lVar2 + 0xf8) == '\0')) {
        iVar1 = *(int *)(lVar2 + 0xf4);
        *(int *)(lVar2 + 0xf4) = iVar1 + 1;
        if ((-1 < *(int *)(lVar2 + 0xf0)) && (*(int *)(lVar2 + 0xf0) <= iVar1)) {
          *(undefined1 *)(lVar2 + 0xf8) = 1;
        }
      }
    }
    lVar3 = *(long *)(lVar2 + 0xd8);
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0xd8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + 0xd8) + 0x30) + 0x10))
                  (_DAT_03d64be0,_DAT_03d64bf0,_DAT_03d64c00,_DAT_03d64c10);
        lVar3 = *(long *)(lVar2 + 0xd8);
      }
      FUN_00c4cf3c(lVar3);
      return;
    }
  }
  return;
}


