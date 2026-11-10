/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb19a4; name: seekoff
 */


/* std::stringbuf::seekoff(long long, std::ios_base::seekdir, unsigned int) */

undefined1  [16] __thiscall
std::stringbuf::seekoff(stringbuf *this,long param_1,int param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  stringbuf *psVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = *(ulong *)(this + 0x30);
  uVar4 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar5) {
    *(ulong *)(this + 0x58) = uVar5;
    uVar4 = uVar5;
  }
  if (((param_4 & 0x18) != 0) && ((param_3 != 1 || ((param_4 & 0x18) != 0x18)))) {
    if (uVar4 == 0) {
      lVar7 = 0;
      if (param_3 == 0) goto LAB_00bb19f4;
LAB_00bb1a08:
      if (param_3 == 2) {
        lVar8 = lVar7;
      }
      else {
        if (param_3 != 1) goto LAB_00bb1a64;
        if ((param_4 >> 3 & 1) == 0) {
          lVar8 = uVar5 - *(long *)(this + 0x28);
        }
        else {
          lVar8 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
        }
      }
    }
    else {
      if (((byte)this[0x40] & 1) == 0) {
        psVar6 = this + 0x41;
      }
      else {
        psVar6 = *(stringbuf **)(this + 0x50);
      }
      lVar7 = uVar4 - (long)psVar6;
      if (param_3 != 0) goto LAB_00bb1a08;
LAB_00bb19f4:
      lVar8 = 0;
    }
    uVar1 = lVar8 + param_1;
    uVar3 = 0xffffffffffffffff;
    if (((long)uVar1 < 0) || (lVar7 < (long)uVar1)) goto LAB_00bb1a68;
    if ((uVar1 == 0) ||
       ((((param_4 >> 3 & 1) == 0 || (*(long *)(this + 0x18) != 0)) &&
        (((param_4 >> 4 & 1) == 0 || (uVar5 != 0)))))) {
      if ((param_4 >> 3 & 1) != 0) {
        *(ulong *)(this + 0x18) = *(long *)(this + 0x10) + uVar1;
        *(ulong *)(this + 0x20) = uVar4;
      }
      if ((param_4 >> 4 & 1) != 0) {
        *(long *)(this + 0x30) = *(long *)(this + 0x28) + (long)(int)uVar1;
      }
      uVar3 = uVar1;
      goto LAB_00bb1a68;
    }
  }
LAB_00bb1a64:
  uVar3 = 0xffffffffffffffff;
LAB_00bb1a68:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}


