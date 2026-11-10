/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a7cbc; name: FUN_001a7cbc
 */


/* WARNING: Control flow encountered bad instruction data */

void * FUN_001a7cbc(long *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  void *__src;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  __src = (void *)*param_1;
  uVar4 = param_1[1] << 1;
  uVar5 = param_1[1] + 0x400000;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  uVar5 = uVar4 * 8;
  if (0x1ff < uVar5) {
    uVar4 = uVar5 + 0xfff >> 3 & 0x1ffffffffffffe00;
  }
  if (0x10000 < uVar5) {
    uVar4 = uVar5 + 0xffff >> 3 & 0x1fffffffffffe000;
  }
  lVar3 = (**(code **)PTR_PTR_047cb890)(uVar4 << 3,0x10);
  if (lVar3 == 0) {
    FUN_0015ed40(uVar4 << 3);
    iVar2 = FUN_0015ed20("v:/devel/projects/oodle2/core\\templates/rrvector.h",0xbf,"makefit1",
                         "pNew != NULL");
    if (iVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 != 0) {
      memcpy((void *)0x0,__src,param_3 << 3);
    }
  }
  else if (param_3 != 0) {
    uVar5 = param_3 & 3;
    if (param_3 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = (undefined8 *)(lVar3 + 0x10);
      puVar8 = (undefined8 *)((long)__src + 0x10);
      do {
        puVar7[-2] = puVar8[-2];
        puVar7[-1] = puVar8[-1];
        *puVar7 = *puVar8;
        puVar1 = puVar8 + 1;
        lVar6 = lVar6 + 4;
        puVar8 = puVar8 + 4;
        puVar7[1] = *puVar1;
        puVar7 = puVar7 + 4;
      } while (param_3 - uVar5 != lVar6);
    }
    if (uVar5 != 0) {
      puVar7 = (undefined8 *)((long)__src + lVar6 * 8);
      puVar8 = (undefined8 *)(lVar3 + lVar6 * 8);
      do {
        uVar5 = uVar5 - 1;
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
  }
  *param_1 = lVar3;
  param_1[1] = uVar4;
  return __src;
}


