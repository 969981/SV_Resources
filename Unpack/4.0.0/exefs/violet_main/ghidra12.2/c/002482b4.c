/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002482b4; name: FUN_002482b4
 */


undefined8 FUN_002482b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 local_48;
  
  lVar3 = *(long *)(param_1 + 0xd8);
  lVar1 = std::chrono::steady_clock::now();
  bVar5 = false;
  do {
    if (*(long *)(param_1 + 0xd0) == 0) {
      return 1;
    }
    if (*(long *)(*(long *)(param_1 + 0xd0) + 8) + 1U <= lVar3 + 1U) {
      return 1;
    }
    local_48 = 100000000;
    FUN_00248820(&local_48);
    lVar2 = std::chrono::steady_clock::now();
    if (bVar5) {
LAB_00248308:
      bVar5 = true;
    }
    else {
      lVar4 = *(long *)(param_1 + 200);
      if ((*(char *)(lVar4 + 0x210) != '\0') &&
         (*(long *)(lVar4 + 0x218) * 1000000000 < lVar2 - lVar1)) {
        FUN_01ea06c8(lVar4 + 0x928);
        goto LAB_00248308;
      }
      bVar5 = false;
    }
    if (69999999999 < lVar2 - lVar1) {
      FUN_006c6f30();
      return 1;
    }
  } while( true );
}


