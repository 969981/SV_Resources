/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f0808; name: FUN_029f0808
 */


void FUN_029f0808(long param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0x464f51c08c21b2ed) {
    uVar1 = 0;
  }
  else if (lVar2 < -0x3b0909b185dfe25e) {
    if (lVar2 == -0x469d16c3924990bf) {
      uVar1 = 1;
    }
    else {
      if (lVar2 != -0x79919925d9118ca8) {
        return;
      }
      uVar1 = 2;
    }
  }
  else if (lVar2 == -0x3b0909b185dfe25e) {
    uVar1 = 3;
  }
  else if (lVar2 == 0x2c02645014d5a2a5) {
    uVar1 = 4;
  }
  else {
    if (lVar2 != 0x7989b6dd56823279) {
      return;
    }
    uVar1 = 5;
  }
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  return;
}


