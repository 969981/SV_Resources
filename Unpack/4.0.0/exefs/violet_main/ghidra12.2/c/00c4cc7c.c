/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4cc7c; name: FUN_00c4cc7c
 */


void FUN_00c4cc7c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar6;
  long *plVar5;
  
  puVar4 = PTR_DAT_047dced0;
  plVar1 = *(long **)(param_1 + 0x50);
  plVar2 = *(long **)(param_1 + 0x58);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    plVar5 = *(long **)(*plVar1 + 0x30);
    plVar3 = *(long **)(*plVar1 + 0x38);
    if (plVar5 != plVar3) {
      do {
        plVar6 = plVar5 + 1;
        if (((uint)*(undefined8 *)puVar4 & (*(uint *)(*plVar5 + 0x108) ^ 0xffffffff) & 7) == 0) {
          FUN_00c4ccf8();
          break;
        }
        plVar5 = plVar6;
      } while (plVar3 != plVar6);
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


