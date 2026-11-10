/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00163700; name: FUN_00163700
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 *
FUN_00163700(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  puVar2 = PTR_PTR_047cb890;
  puVar4 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0xf8,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_0015ed40(0xf8);
  }
  lVar5 = (long)param_6;
  puVar4[3] = 0;
  lVar10 = 0;
  if (lVar5 != 0) {
    lVar10 = param_2 / lVar5;
  }
  uVar7 = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  plVar8 = puVar4 + 2;
  *plVar8 = 0;
  puVar4[0x18] = lVar5;
  puVar4[0x19] = param_1;
  puVar4[0x1a] = param_2;
  puVar4[0x1d] = lVar10;
  puVar4[0x1e] = 0;
  do {
    while( true ) {
      *plVar8 = 0;
      uVar9 = (long)puVar4[0x1d] >> (uVar7 & 0x3f);
      uVar6 = plVar8[-1];
      if (uVar6 < uVar9) break;
      if (uVar9 == 0) {
        lVar10 = 0;
      }
      else {
        memset((void *)plVar8[-2],0,uVar9 << 3);
        lVar10 = *plVar8 + uVar9;
      }
      *plVar8 = lVar10;
LAB_001637d4:
      uVar7 = uVar7 + 1;
      plVar8 = plVar8 + 3;
      if (uVar7 == 8) goto LAB_001638e4;
    }
    lVar10 = plVar8[-2];
    uVar1 = uVar6 << 1;
    if (uVar6 + 0x400000 <= uVar6 << 1) {
      uVar1 = uVar6 + 0x400000;
    }
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    uVar6 = uVar1 * 8;
    if (0x1ff < uVar6) {
      uVar1 = uVar6 + 0xfff >> 3 & 0x1ffffffffffffe00;
    }
    if (0x10000 < uVar6) {
      uVar1 = uVar6 + 0xffff >> 3 & 0x1fffffffffffe000;
    }
    lVar5 = (**(code **)puVar2)(uVar1 << 3,0x10);
    if (lVar5 == 0) {
      FUN_0015ed40(uVar1 << 3);
      iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector.h",0xbf,"makefit1",
                           "pNew != NULL");
      if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    plVar8[-2] = lVar5;
    plVar8[-1] = uVar1;
    memset((void *)(lVar5 + *plVar8 * 8),0,uVar9 << 3);
    *plVar8 = *plVar8 + uVar9;
    if (lVar10 == 0) goto LAB_001637d4;
    (**(code **)PTR_PTR_047cb898)(lVar10);
    uVar7 = uVar7 + 1;
    plVar8 = plVar8 + 3;
  } while (uVar7 != 8);
LAB_001638e4:
  *(undefined4 *)(puVar4 + 0x1b) = param_3;
  *(undefined4 *)((long)puVar4 + 0xdc) = param_4;
  *(undefined4 *)(puVar4 + 0x1c) = param_5;
  *(undefined4 *)((long)puVar4 + 0xe4) = param_7;
  return puVar4;
}


