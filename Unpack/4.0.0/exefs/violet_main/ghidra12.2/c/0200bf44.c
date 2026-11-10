/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0200bf44; name: FUN_0200bf44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200bf44(undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
                 long param_5,uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_5 + 0x40) != '\0') {
    lVar5 = *(long *)(param_5 + 0x78);
    *(long *)(lVar5 + 0x4b8) = param_1._8_8_;
    *(long *)(lVar5 + 0x4b0) = param_1._0_8_;
    uVar6 = 2;
    if (param_2 < 2.0) {
      uVar6 = 1;
    }
    uVar1 = 0;
    if (1.0 <= param_2) {
      uVar1 = uVar6;
    }
    *(undefined4 *)(lVar5 + 0x4d0) = uVar1;
    uVar4 = _UNK_03caa5b8;
    uVar3 = _DAT_03caa5b0;
    *(undefined2 *)(lVar5 + 0x4ac) = 1;
    *(uint *)(lVar5 + 0x4d4) = param_6 & 1;
    iVar2 = (uint)(0.9 <= param_4) << 1;
    if (param_4 < 0.1) {
      iVar2 = 1;
    }
    *(undefined8 *)(lVar5 + 0x4c8) = uVar4;
    *(undefined8 *)(lVar5 + 0x4c0) = uVar3;
    *(int *)(lVar5 + 0x4d8) = iVar2;
    *(undefined8 *)(lVar5 + 0x4dc) = 0;
    *(undefined4 *)(lVar5 + 0x510) = 0x3f800000;
    *(undefined4 *)(lVar5 + 0x4e4) = 0;
    *(undefined4 *)(lVar5 + 0x540) = 0;
    if (*(char *)(lVar5 + 0x14f) != '\0') {
      *(undefined4 *)(lVar5 + 0x4e0) = 0x22;
    }
  }
  return;
}


