/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02985e80; name: FUN_02985e80
 */


void FUN_02985e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar2 = FUN_01249348(param_3);
  if ((uVar2 & 0xff) != 0) {
    uVar5 = 0;
    do {
      puVar4 = (undefined4 *)FUN_01249354(param_3,uVar5);
      if ((((puVar4 != (undefined4 *)0x0) && (*(char *)((long)puVar4 + 0x89) == '\0')) &&
          (puVar4[1] == 3)) && (*(char *)((long)puVar4 + 0x1e) == '\0')) {
        uVar3 = FUN_01689a40(param_1,*puVar4);
        uVar1 = FUN_02985fb0(param_1,uVar3,*(undefined1 *)(puVar4 + 7),
                             *(undefined1 *)((long)puVar4 + 0x1d));
        FUN_0124e224(param_2,uVar1);
        *(undefined1 *)((long)puVar4 + 0x89) = 1;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xff) < (uVar2 & 0xff));
  }
  return;
}


