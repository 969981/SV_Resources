/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e40190; name: FUN_01e40190
 */


void FUN_01e40190(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = lVar7;
  if (param_2 != 0) {
    lVar5 = lVar7 + param_2 * 0x78;
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(lVar7 + lVar8);
      *puVar1 = *param_3;
      std::string::string((string *)(puVar1 + 2),(string *)(param_3 + 2));
      std::string::string((string *)(puVar1 + 8),(string *)(param_3 + 8));
      uVar6 = *(undefined8 *)(param_3 + 0xe);
      uVar3 = *(undefined8 *)(param_3 + 0x10);
      uVar2 = *(undefined8 *)(param_3 + 0x12);
      uVar4 = *(undefined8 *)(param_3 + 0x14);
      *(undefined1 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x12) = uVar2;
      *(undefined8 *)(puVar1 + 0x14) = uVar4;
      *(undefined8 *)(puVar1 + 0xe) = uVar6;
      *(undefined8 *)(puVar1 + 0x10) = uVar3;
      if (*(char *)(param_3 + 0x16) != '\0') {
        std::locale::locale((locale *)(puVar1 + 0x18),(locale *)(param_3 + 0x18));
        *(undefined1 *)(puVar1 + 0x16) = 1;
      }
      uVar6 = *(undefined8 *)(param_3 + 0x1a);
      lVar8 = lVar8 + 0x78;
      puVar1[0x1c] = param_3[0x1c];
      *(undefined8 *)(puVar1 + 0x1a) = uVar6;
    } while (param_2 * 0x78 != lVar8);
  }
  *(long *)(param_1 + 0x10) = lVar5;
  return;
}


